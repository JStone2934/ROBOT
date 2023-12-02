#include  <ros/ros.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Spawn.h>
#include <turtlesim/Pose.h>
#define PI 3.141592653589
int main(int argc, char** argv){
    // 初始化ROS节点
    ros::init(argc, argv, "my_tf_listener");
    // 创建节点句柄
    ros::NodeHandle nh;
    // 请求产生turtle2
    ros::service::waitForService("/spawn");
    ros::ServiceClient add_turtle = nh.serviceClient<turtlesim::Spawn>("/spawn");
    turtlesim::Spawn srv;
    add_turtle.call(srv);
    // 创建发布turtle2速度控制指令的发布者
    ros::Publisher turtle_vel = nh.advertise<geometry_msgs::Twist>("/turtle2/cmd_vel", 10);    
    // 创建tf的监听器
    tf::TransformListener listener;
    ros::Rate rate(10);     
    turtlesim::Pose msg;
    while(nh.ok()) 
    {
        tf::StampedTransform transform;
        // 获取turtle1与turtle2坐标系之间的tf数据
        try
        {
            //查询是否有这两个坐标系，查询当前时间，如果超过3s则报错
            listener.waitForTransform("/turtle2", "/turtle1", ros::Time(0), ros::Duration(3.0));
            listener.lookupTransform("/turtle2", "/turtle1", ros::Time(0), transform);
        }
        catch(tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;  
        }
        // 根据turtle1与turtle2坐标系之间的位置关系，发布turtle2的速度控制指令
        geometry_msgs::Twist vel_msg;
        vel_msg.angular.z = 4.0 * atan2(transform.getOrigin().y(), transform.getOrigin().x());
        vel_msg.linear.x = 0.5 * sqrt(pow(transform.getOrigin().x(), 2) + pow(transform.getOrigin().y(), 2));        
        //发布速度
        bool turn;
        if(pow((transform.getOrigin().x()-msg.x), 2) + pow((transform.getOrigin().y()-msg.y), 2)<1.8){
            
            
            if(turn==0){
            vel_msg.angular.z=PI*5;
            
            turn=1;
            }
            else{
                vel_msg.angular.z=-1;
                vel_msg.linear.x = 1;
                
            }
            
        };
        
        turtle_vel.publish(vel_msg);
        rate.sleep();        
    }
    return 0;
}
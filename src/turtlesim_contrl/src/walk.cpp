#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#define Pi    3.141592653589
int dire=Pi*10;

int main(int argc,char** argv)
{
    ros::init(argc, argv, "circle");

    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);//发布话题为/turtle1/cmd_vel，话题的类型为geometry_msgs::Twist
    ros::Rate loop_rate(20);

    while(ros::ok())
    {
    geometry_msgs::Twist t;
    int count=0;
    
  while (ros::ok()){
    t.linear.x = 2; // 设置线速度为1m/s，正为前进，负为后退
    t.linear.y = 0;
    t.linear.z = 0;
    t.angular.x = 0;
    t.angular.y = 0;
    t.angular.z = 0; 
    count++;
    
    if(count==20){
        t.angular.z = dire; //转90°
        
    }
    if(count==40){
        t.angular.z = -dire; //转90°
    }
    if(count>=60&&count<80)
    {
        t.angular.z = 2.5;//为变量中对应的属性进行赋值
        t.linear.x=4;
    }
    if(count==80)
    {
        t.angular.z = 2*dire; //转90°
    }
    if(count>80&&count<100)
    {
        t.angular.z = -2.5;//为变量中对应的属性进行赋值
        t.linear.x=4;
    }
    if(count==110)
    {
        t.angular.z = dire; //转90°
    }
    if(count==130)
    {
        t.angular.z = -dire; //转90°
    }
    if(count>=150)
    {
        t.linear.x = 0;
    }
    pub.publish(t);
    ros::spinOnce();
    loop_rate.sleep();
    }
    return 0;
}
}
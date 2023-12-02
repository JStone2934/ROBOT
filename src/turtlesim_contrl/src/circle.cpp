#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc,char** argv)
{
    ros::init(argc, argv, "circle");

    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);//发布话题为/turtle1/cmd_vel，话题的类型为geometry_msgs::Twist
    ros::Rate loop_rate(10);
    while(ros::ok())
    {
    geometry_msgs::Twist t;//定义话题类型变量

    t.angular.z = 5;//为变量中对应的属性进行赋值
    t.linear.x=8;
    pub.publish(t);//发布该话题
    ros::spinOnce();
    }
    return 0;
}

#include<string>
#include<ros/ros.h>
#include<std_srvs/Empty.h>
int main(int argc, char** argv)
{
    ros::init(argc, argv, "parameter_config");
    ros::NodeHandle nh;
    int red, green, blue;
    ros::param::get("/turtlesim/background_r", red);
    ros::param::get("/turtlesim/background_g", green);
    ros::param::get("/turtlesim/background_b", blue);
    ROS_INFO("Get Background Color[%d %d %d]", red, green, blue);
    ros::param::set("/turtlesim/background_r", 255);
    ros::param::set("/turtlesim/background_g", 255);
    ros::param::set("/turtlesim/background_b", 255);
    ROS_INFO("Set Background Color[69, 86, 255]");
    ros::param::get("/turtlesim/background_r", red);
    ros::param::get("/turtlesim/background_g", green);
    ros::param::get("/turtlesim/background_b", blue);
    ROS_INFO("Re-get Background Color[%d %d %d]", red, green, blue);
    //刷新背景颜色
    ros::service::waitForService("/clear");
    ros::ServiceClient clear_background = nh.serviceClient<std_srvs::Empty>("/clear");
    std_srvs::Empty srv;
    clear_background.call(srv);
}
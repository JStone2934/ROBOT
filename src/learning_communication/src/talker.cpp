#include<sstream>
#include"ros/ros.h"
#include"std_msgs/String.h"
int main(int argc,char **argv)
{
		ros::init(argc,argv,"talker");		//ROS节点的初始化 
        ros::NodeHandle n;			//创建节点句柄 
		//创建一个Publisher，发布名为chatter的topic，消息类型为std_msgs::String
		ros::Publisher chatter_pub=n.advertise<std_msgs::String>("chatter",1000);
		ros::Rate  loop_rate(10);		//设置循环的频率，单位是Hz
		int count=0;
		while(ros::ok())
		{
			std_msgs::String msg;	//初始化std_msgs::string类型的消息 
			std::stringstream ss;	
			ss<<"helloe world"<<count;
			msg.data=ss.str();
			ROS_INFO("%s",msg.data.c_str());	//发布消息 
			chatter_pub.publish(msg);
			ros::spinOnce();			//循环等待回调函数 
			loop_rate.sleep();			//按照循环频率延时 
			++count;
		}
		return 0;
}

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include<time.h>

#define random(x) (rand()%x)
#define Pi    3.141592653589
int dire=Pi*10;

int main(int argc,char** argv)
{
    ros::init(argc, argv, "r_walk");

    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);//发布话题为/turtle1/cmd_vel，话题的类型为geometry_msgs::Twist
    ros::Rate loop_rate(2);
    srand((int)time(0));
    geometry_msgs::Twist t;
    int seed=random(4);
 
    int count=0;
    while(ros::ok())
    {
    count++;
    t.angular.z=0;
    t.linear.x=1;
    
    if(seed==3&&count<=7){
        t.angular.z=1;
    }else if(seed==3&&count>7){
        t.angular.z=-1;
    }

    if(count==4){
        switch (seed)
        {
        case 1:
            t.angular.z=Pi;
            break;
        case 2:
            t.angular.z=-Pi;
            break;
        default:
            break;
        }
    }else if(count==11){
        switch (seed)
        {
        case 1/* constant-expression */:
            t.angular.z=-Pi;
            break;
        case 2:
            t.angular.z=Pi;
            break;
        default:
            break;
        }
    }

    if(count>7){
        t.linear.x=-1;
    }
    if(count>=14)
    {
        t.linear.x=0;
        t.angular.z=0;
    }

    pub.publish(t);
    ros::spinOnce();
    loop_rate.sleep();
    }
    return 0;
}

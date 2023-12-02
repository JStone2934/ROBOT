#include<ros/ros.h>
#include<actionlib/server/simple_action_server.h>
#include"learning_action/ReadbookAction.h"

void execute(const learning_action::ReadbookGoalConstPtr &goal,
  		actionlib::SimpleActionServer<learning_action::ReadbookAction> *as)
{
    ros::Rate r(1);
    learning_action::ReadbookFeedback feedback;
    ROS_INFO("Begin to read %d pages.", goal->total_pages);
    for(int i=0; i<goal->total_pages; i++)
    {
        feedback.reading_page = i;
        as->publishFeedback(feedback);
        r.sleep();
    }
    ROS_INFO("All pages is read.");
    as->setSucceeded();
}
int main(int argc, char** argv)
{
    ros::init(argc, argv, "readbook_server");
    ros::NodeHandle nh;
    actionlib::SimpleActionServer<learning_action::ReadbookAction> 
            server(nh, "read_book", boost::bind(&execute, _1, &server), false);
    server.start();
    ros::spin();
    return 0;
}
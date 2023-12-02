#include<ros/ros.h>
	#include<actionlib/client/simple_action_client.h>
	#include"learning_action/ReadbookAction.h"

	void doneCb(const actionlib::SimpleClientGoalState &state, const
    		learning_action::ReadbookResultConstPtr &result)
	{
  ROS_INFO("Finish Reading!");
    ros::shutdown();
}
void activeCb()
{
    ROS_INFO("Goal is active! Begin to read.");
}

void feedbackCb(const learning_action::ReadbookFeedbackConstPtr 
 &feedback)
{
    ROS_INFO("Reading page:%d", feedback->reading_page);
}
int main(int argc, char** argv)
{
    ros::init(argc, argv, "readbook_client");
    actionlib::SimpleActionClient<learning_action::ReadbookAction> 
            client("read_book",true);
    client.waitForServer();
    learning_action::ReadbookGoal goal;
    goal.total_pages=10;
    client.sendGoal(goal, &doneCb, &activeCb, &feedbackCb);
    ros::spin(); 
    return 0;
}
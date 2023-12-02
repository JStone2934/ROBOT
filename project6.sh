source devel/setup.bash
roslaunch  mrobot_description  arbotix_mrobot_with_kinect.launch
gnome-terminal -- bash -c "roslaunch mrobot_teleop square.launch" 
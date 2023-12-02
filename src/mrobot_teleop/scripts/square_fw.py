#!/usr/bin/env python
# -*- coding: utf-8 -*-
import rospy
from geometry_msgs.msg import Twist
import sys, select, termios, tty
import time

msg = """
square---->
"""

speed = .2
turn = 1

def vels(speed,turn):
    return "currently:\tspeed %s\tturn %s " % (speed,turn)

if __name__=="__main__":
    settings = termios.tcgetattr(sys.stdin)
    
    rospy.init_node('mrobot_teleop')
    pub = rospy.Publisher('/cmd_vel', Twist, queue_size=5)

    x = 0
    th = 0
    status = 0
    count = 0
    acc = 0.1
    target_speed = 0
    target_turn = 0
    control_speed = 0
    control_turn = 0

    square=[]
    try:
        print(msg)
        print(vels(speed,turn))
        start_time=time.time()
        while(1):
            control_speed=0.2
            # 创建并发布twist消息
            
            end_time=time.time()
            delta=end_time-start_time
            if delta > 10 and delta<11:
                control_speed=0
            if delta >11 and delta <15:
                control_speed=0
                control_turn=1.45
            if delta>15 and delta < 20:
                control_turn=0
                control_speed=0.3
            if delta>21 and delta < 25:
                control_turn=1.45
                control_speed=0
            if delta>25 and delta < 30:
                control_turn=0
                control_speed=0.4
            if delta>31 and delta < 35:
                control_turn=1.45
                control_speed=0
            if delta>35 and delta < 40:
                control_turn=0
                control_speed=0.4
            if delta>41:
                control_speed=0
                control_turn=0
            else:
                pass
            
            twist = Twist()
            twist.linear.x = control_speed; 
            twist.linear.y = 0; 
            twist.linear.z = 0
            twist.angular.x = 0; 
            twist.angular.y = 0; 
            twist.angular.z = control_turn
            pub.publish(twist)
    except:
        print(e)

    finally:
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)

    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)

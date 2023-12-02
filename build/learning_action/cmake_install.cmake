# Install script for directory: /home/jstone/Documents/ROBOT/ros_1/catkin_ws/src/learning_action

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action/action" TYPE FILE FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/src/learning_action/action/Readbook.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action/msg" TYPE FILE FILES
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookAction.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookActionGoal.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookActionResult.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookActionFeedback.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookGoal.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookResult.msg"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/learning_action/msg/ReadbookFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action/cmake" TYPE FILE FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/build/learning_action/catkin_generated/installspace/learning_action-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/include/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/roseus/ros/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/common-lisp/ros/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/share/gennodejs/ros/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/lib/python3/dist-packages/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/devel/lib/python3/dist-packages/learning_action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/build/learning_action/catkin_generated/installspace/learning_action.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action/cmake" TYPE FILE FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/build/learning_action/catkin_generated/installspace/learning_action-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action/cmake" TYPE FILE FILES
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/build/learning_action/catkin_generated/installspace/learning_actionConfig.cmake"
    "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/build/learning_action/catkin_generated/installspace/learning_actionConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/learning_action" TYPE FILE FILES "/home/jstone/Documents/ROBOT/ros_1/catkin_ws/src/learning_action/package.xml")
endif()


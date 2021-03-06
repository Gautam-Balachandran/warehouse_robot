/**
 *BSD 3-Clause License
 *
 *Copyright (c) 2019, Yashaarth Todi
 *All rights reserved.
 *
 *Redistribution and use in source and binary forms, with or without
 *modification, are permitted provided that the following conditions are met:
 *1. Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 *2. Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *3. Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 *THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 *FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file localisationTestClass.hpp
 * @brief This file is the main file of project AuWaMaR
 *
 * This project contains the execution to navigate Turtlebot3 in a warehouse
 * environment using A star path planning, picks up a package and drops it in
 * user defined postitions. Turtebot3 uses OpenManipulator to perform thus
 * pick-place task.
 *
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the BSD 3-Clause License.
 *
 * @author Suyash Yeotikar
 * @author Gautam Balachandran
 * @author Yashaarth Todi
 *
 * @date 11-20-2019
 */

#ifndef WAREHOUSE_ROBOT_SRC_WAREHOUSE_ROBOT_TEST_LOCALISATIONTESTCLASS_HPP_
#define WAREHOUSE_ROBOT_SRC_WAREHOUSE_ROBOT_TEST_LOCALISATIONTESTCLASS_HPP_

#include <gtest/gtest.h>
#include <tf/transform_listener.h>
#include <tf/transform_broadcaster.h>
#include <ros/ros.h>
#include <geometry_msgs/Pose.h>
/**
 * @brief Localization Test class that is used for testing the Localization module
 */
class LocalisationTest {
 public:
  // Flag that is set if the pose message is recieved
  bool receivedPose = false;
  // Subscribed pose message of the robot
  geometry_msgs::Pose robotPose;
  // Robot pose subscriber
  ros::Subscriber poseSubscriber;
 public:
  /*
   * @brief Function to initialize the pose of the robot
   * @param none
   * @return none
   */
  void InitPose();
  /*
   * @brief Callback function for the pose of the robot
   * @param geometry pose message of the robot
   * @return none
   */
  void PoseCallback(const geometry_msgs::Pose::ConstPtr msg);
};

#endif  // WAREHOUSE_ROBOT_SRC_WAREHOUSE_ROBOT_TEST_LOCALISATIONTESTCLASS_HPP_

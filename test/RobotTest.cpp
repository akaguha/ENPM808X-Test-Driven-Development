/**
 * Copyright [2018] <Akash Guha>
 *
 * @file    RobotTest.cpp
 * @author  Akash Guha (akaguha@terpmail.umd.edu)
 * @date    11/30/2018
 * @version 1.0
 *
 * @brief   Program to test Robot class.
 *
 * @section DESCRIPTION
 *
 * This is a program that tests Robot class.
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include "PidController.hpp"
#include "Robot.hpp"

using ::testing::AtLeast;
using ::testing::Return;
  //  using ::testing::_;

class MockPidController : public PidController {
 public:
  MockPidController() : PidController() {}
  MOCK_METHOD3(pidControllerInit, void(double kP, double kI, double kD));
  MOCK_METHOD2(computeVelocity, double(double
  targetSetpoint, double actualVelocity));
};

TEST(RobotTest, ComputeVelocityTest) {
  MockPidController pid;  //  created a mock class object
  Robot bot;  //  created object of the class to be tested

  EXPECT_CALL(pid, computeVelocity(-5.0, 3.0))
  .Times(AtLeast(1))
  .WillOnce(Return(3.0));

  double returnVal = bot.drive(pid);

  EXPECT_EQ(returnVal, 3.0);
}

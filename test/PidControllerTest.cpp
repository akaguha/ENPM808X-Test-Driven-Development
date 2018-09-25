/**
 * Copyright [2018] <Rohitkrishna Nambiar>
 *
 * @file    PidControllerTest.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/22/2018
 * @version 1.0
 *
 * @brief   Program to test PidController class.
 *
 * @section DESCRIPTION
 *
 * This is a program that tests PidController class.
 */

#include <gtest/gtest.h>
#include <memory>
#include "PidController.hpp"

/**
 *@brief Test if the compute velocity function gives correct output.
 */
TEST(PidController, computeVelocityGeneral) {
  std::shared_ptr<PidController> testPID;
  testPID = std::make_shared < PidController > (0.1, 0.01, 0.01);
  EXPECT_NEAR(testPID->computeVelocity(0.7, 0.5), 0.0402, 0.0001);
}

/**
 *@brief Test if actual velocity is returned on negative target setpoint..
 */
TEST(PidController, computeVelocityNegativeTargetVelocity) {
  std::shared_ptr<PidController> testPID;
  testPID = std::make_shared < PidController > (0.1, 0.01, 0.01);
  EXPECT_EQ(testPID->computeVelocity(-5, 3.0), 3.0);
}

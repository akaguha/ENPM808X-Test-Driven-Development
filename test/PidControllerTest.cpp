/**
 * Copyright [2018] Akash Guha
 *
 * @file    PidControllerTest.cpp
 * @author  Akash Guha (akaguha@terpmail.umd.edu)
 * @date    11/30/2018
 * @version 2.0
 *
 * @brief   Program to test PidController class.
 *
 * @section DESCRIPTION
 *
 * This is a program that tests PidController class.
 */

#include <gtest/gtest.h>
#include "PidController.hpp"

PidController testPID;

/**
 *@brief Test if the compute velocity function gives correct output.
 */
TEST(PidController, computeVelocityGeneral) {
  testPID.pidControllerInit(0.1, 0.01, 0.01);
  EXPECT_NEAR(testPID.computeVelocity(0.7, 0.5), 0.0402, 0.0001);
}

/**
 *@brief Test if actual velocity is returned on negative target setpoint.
 */
TEST(PidController, computeVelocityNegativeTargetVelocity) {
  testPID.pidControllerInit(0.1, 0.01, 0.01);
  EXPECT_EQ(testPID.computeVelocity(-5, 3.0), 3.0);
}

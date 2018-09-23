/**
 * Copyright (c) 2018 Rohitkrishna Nambiar
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

std::shared_ptr<PidController> testPID;

// Test compute velocity function
TEST(PidController, computeVelocityGeneral) {
  testPID = std::make_shared < PidController > (0.7, 0.6, 0.32);
  ASSERT_EQ(testPID->computeVelocity(0.0, 0.0), 4.0);
}

// Test for negative target value in compute velocity
TEST(PidController, computeVelocityNegativeTargetVelocity) {
  testPID = std::make_shared < PidController > (0.7, 0.6, 0.32);
  ASSERT_EQ(testPID->computeVelocity(-5, 3.0), 3.0);
}

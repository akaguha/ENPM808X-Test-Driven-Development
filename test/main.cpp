/**
 * Copyright (c) 2018 Rohitkrishna Nambiar
 *
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/22/2018
 * @version 1.0
 *
 * @brief   Program to run tests.
 *
 * @section DESCRIPTION
 *
 * This is a program to run tests..
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

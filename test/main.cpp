/**
 * Copyright (c) 2018 Akash Guha
 *
 * @file    main.cpp
 * @authors Akash Guha (akaguha@terpmail.umd.edu)
 * @date    11/30/2018
 * @version 2.0
 *
 * @brief   Program to run tests.
 *
 * @section DESCRIPTION
 *
 * This is a program to run tests.
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

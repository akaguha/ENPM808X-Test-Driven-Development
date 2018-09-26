/**
* Copyright [2018] <Rohitkrishna Nambiar>
*
* @file    main.cpp
* @author  Rohitkrishna Nambiar (driver) and Akash Guha (navigator)
* @date    9/22/2018
* @version 1.0
*
* @brief   Program to run PidController class.
*
* @section DESCRIPTION
*
* This is a program that uses the PidController library to
* implement PID controller for Acme Robotics.
*/

#include <iostream>
#include<stdio.h>
#include "PidController.hpp"

/**
* @brief Main function
*
* @return Program execution status
*/
int main() {
  /*
  * Can create an object and call the compute velocity
  * method for a given current velocity and target setpoint.
  */

  PidController class_obj(0.1, 0.01, 0.01);
  std::cout<<class_obj.computeVelocity(3.0,5.0);
  return 0;
}

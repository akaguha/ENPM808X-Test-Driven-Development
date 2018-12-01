/**
* Copyright [2018] Akash Guha
*
* @file    main.cpp
* @author  Akash Guha
* @date    11/30/2018
* @version 2.0
*
* @brief   Program to run the Robot class.
*
* @section DESCRIPTION
*
* This is a program that creates a Robot class which uses the
* control inputs obtained from the PID controller class to drive around.
*/

#include <iostream>
#include "Robot.hpp"

/**
* @brief Main function
*
* @return Program execution status as int
*/
int main() {
  /*
  * Creates a Robot class object and calls its drive method
  * which uses input from the PID controller class
  */
  Robot class_obj;
  PidController PID;
  double vel = class_obj.drive(PID);
  std::cout << "Output Velocity: " << vel << std::endl;
  return 0;
}

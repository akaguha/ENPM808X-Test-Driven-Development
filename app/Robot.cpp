/**
* Copyright [2018] Akash Guha
*
* @file    Robot.cpp
* @author  Akash Guha (akaguha@terpmail.umd.edu)
* @date    11/30/2018
* @version 1.0
*
* @brief   Robot class.
*
* @section DESCRIPTION
*
* This cpp file implements the methods for Robot class.
*/

#include <iostream>
#include "Robot.hpp"

/**
* @brief Constructs the Robot object
*/
Robot::Robot() {
}

/**
* @brief Destroys the Robot object
*/
Robot::~Robot() {
}

/**
* @brief Robot's drive method controlled by the PID inputs
*
* @param PID is a reference to the PID controller class
*
* @return computed velocity as double
*
*/
double Robot::drive(PidController &PID_) {
  //  PID controller class is passed as a parameter
  PID_.pidControllerInit(0.1, 0.01, 0.01);
  return PID_.computeVelocity(-5, 3.0);  //  (3.0, 5.0);
}


/**
* Copyright [2018] Akash Guha
*
* @file    PidController.hpp
* @author  Akash Guha(akaguha@terpmail.umd.edu)
* @date    11/30/2018
* @version 2.0
*
* @brief   PidController class.
*
* @section DESCRIPTION
*
* This cpp file implements the methods for PID Controller.
*/

#include <iostream>
#include "PidController.hpp"

/**
* @brief Constructs the PidController object with error value as zero
*/
PidController::PidController() {
  error = 0.0;
  kP = 0.0;
  kI = 0.0;
  kD = 0.0;
}

/**
* @brief Destroys the PidController object
*/
PidController::~PidController() {
}

/**
* @brief Constructs PidController object with 3 user values
*
* @param kP is the proportional gain double
* @param kI is the integral gain double
* @param kD is the differential gain double
*
* @return true or false based on specific values of kP, kI and kD
*/
void PidController::pidControllerInit(double userKp,
double userKi, double userKd) {
  // Printing the user defined value of gains to terminal.
  kP = userKp;
  kI = userKi;
  kD = userKd;

//  std::cout << "User KP:" << kP << "\n";
//  std::cout << "User KI:" << kI << "\n";
//  std::cout << "User KD:" << kD << "\n";
}

/**
* @brief Computes the new velocity given target and actual velocity
*
* @param targetSetpoint is the desired setpoint velocity double
* @param actualVelocity is the present velocity double
*
* @return computed velocity double
*/
double PidController::computeVelocity(double targetSetpoint,

  double actualVelocity) {
    /*
    * The computed velocity can be calculated by the formula
    *
    * velocity = kP*error + kI*error*dt + kD*error/dt
    * The error can be calculated as the difference between
    * target and actual velocity.
    *
    * dt = 0.1
    */

  double error = targetSetpoint - actualVelocity;
  double dt = 0.1;
  double velocity;

  velocity = kP * error + kI * error * dt + kD * error / dt;
  if (targetSetpoint < 0.0) {
    velocity = actualVelocity;
    }
    return velocity;
  }



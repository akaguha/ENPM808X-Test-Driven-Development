/**
 * Copyright [2018] <Rohitkrishna Nambiar>
 *
 * @file    PidController.hpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/22/2018
 * @version 1.0
 *
 * @brief   PidController class.
 *
 * @section DESCRIPTION
 *
 * This class cpp file implements the methods for PID Controller.
 */

#include <iostream>
#include "PidController.hpp"

/**
 * @brief Constructs the PidController object with default values
 */
PidController::PidController() {
  // Printing the default values of gains to terminal.
}

/**
 * @brief Constructs PidController object with 3 user values
 *
 * @param kP is the proportional gain double
 * @param kI is the integral gain double
 * @param kD is the differential gain double
 */
PidController::PidController(double userKp, double userKi, double userKd) {
  // Printing the user defined value of gains to terminal.
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
   * velocity = kP*error + kI*error*dt + kD*error/dt
   *
   * The error can be calculated as the difference between
   * target and actual velocity.
   *
   * dt = 0.1
   */
  return 0.0;
}

/**
 * @brief Destroys the PidController object
 */
PidController::~PidController() {
}

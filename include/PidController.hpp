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
 * This class hpp file defines the methods for PID Controller.
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <iostream>

/**
 * @brief      Class for PID Controller.
 */
class PidController {
 private:
  double kP = 0.1;
  double kI = 0.0;
  double kD = 0.0;

 public:
  /**
   * @brief Constructs PidController object to default values
   *
   */
  PidController();

  /**
   * @brief Constructs PidController object with gain values
   *
   * @param kP is the proportional gain double
   * @param kI is the integral gain double
   * @param kD is the differential gain double
   */
  PidController(double kP, double kI, double kD);

  /**
   * @brief Destroys the PidController object
   */
  ~PidController();

  /**
   * @brief Computes the new velocity given target and actual velocity
   *
   * @param targetSetpoint is the desired setpoint velocity double
   * @param actualVelocity is the present velocity double
   *
   * @return computed velocity double
   */
  double computeVelocity(double targetSetpoint, double actualVelocity);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_

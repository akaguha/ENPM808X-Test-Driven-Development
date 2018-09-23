/**
 * Copyright 2018 Rohitkrishna Nambiar
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
  double kP = 0.0;
  double kI = 0.0;
  double kD = 0.0;

 public:
  /**
   * @brief Constructs PidController object to default values
   */
  PidController();

  /**
   * @brief Constructs PidController object with 3 user values
   */
  PidController(double kP, double kI, double kD);

  /**
   * @brief Destroys the PidController object
   */
  ~PidController();

  /**
   * @brief Computes the new velocity given target and actual velocity
   */
  double computeVelocity(double targetSetpoint, double actualVelocity);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_

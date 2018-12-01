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
 * This hpp file defines the methods for PID Controller.
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <iostream>

/**
 * @brief      Class for PID Controller.
 */
class PidController {
 public:
  //  PID coefficients
  double kP;
  double kI;
  double kD;
  //  error
  double error;
  /**
   * @brief Constructs PidController object
   *
   */
  PidController();

  /**
   * @brief Destroys the PidController object
   */
  virtual ~PidController();

  /**
   * @brief Initializes the PID coefficients as per the passed values
   *
   * @param kP is the proportional gain double
   * @param kI is the integral gain double
   * @param kD is the differential gain double
   */
  virtual void pidControllerInit(double kP, double kI, double kD);

  /**
   * @brief Computes the new velocity given target and actual velocity
   *
   * @param targetSetpoint is the desired setpoint velocity double
   * @param actualVelocity is the present velocity double
   *
   * @return computed velocity double
   */
  virtual double computeVelocity(double targetSetpoint, double actualVelocity);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_

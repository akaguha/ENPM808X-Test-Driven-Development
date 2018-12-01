/**
 * Copyright [2018] <Akash Guha>
 *
 * @file    Robot.hpp
 * @author  Akash Guha (akaguha@terpmail.umd.edu)
 * @date    11/30/2018
 * @version 1.0
 *
 * @brief   Robot class.
 *
 * @section DESCRIPTION
 *
 * This hpp file defines the methods for Robot class.
 */

#ifndef INCLUDE_ROBOT_HPP_
#define INCLUDE_ROBOT_HPP_
#include <string>
#include "PidController.hpp"

class Robot {
 private:
  bool botStatus = false;
  std::string sensorType;
 public:
  /**
  * @brief Robot class constructor
  */
  Robot();
  /**
  * @brief Robot class destructor
  */
  virtual ~Robot();
  /**
  * @brief Drive method controlled by PID class
  *
  * @param PID controller object passed as parameter
  *
  * @return computed control velocity to be given to motors as double
  */
  double drive(PidController &PID_);
};

#endif /* INCLUDE_ROBOT_HPP_ */

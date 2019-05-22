#ifndef DFRobotL298PShield_H
#define DFRobotL298PShield_H

#include <Arduino.h>

// Pins are fixed since it is a shield
#define LEFT_PWM  7
#define LEFT_EN   6
#define RIGHT_PWM 4
#define RIGHT_EN  5

class DFRobotL298PShield
{
  public:
    // Constructor
    DFRobotL298PShield();
    // Public functions
    void left_set_pwm(int16_t desired_pwm);  // Sets the desired PWM value
    void right_set_pwm(int16_t desired_pwm);
};

#endif  // DFRobotL298PShield_H

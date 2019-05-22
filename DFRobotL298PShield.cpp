#include "DFRobotL298PShield.h"

// Constructor
DFRobotL298PShield::DFRobotL298PShield()
{
  // Initializes the pins
  pinMode(LEFT_EN, OUTPUT);
  pinMode(LEFT_PWM, OUTPUT);
  pinMode(RIGHT_EN, OUTPUT);
  pinMode(RIGHT_PWM, OUTPUT);
}

void DFRobotL298PShield::left_set_pwm(int16_t desired_pwm)
{
  // Sets the pwm value.  Will take negative pwm values.
  if (desired_pwm < 0)
  {
    digitalWrite(LEFT_PWM, LOW);
    desired_pwm=-desired_pwm;
  }
  else
  {
    digitalWrite(LEFT_PWM, HIGH);
  }

  if (desired_pwm>255)
    desired_pwm=255;
  
  analogWrite(LEFT_EN, desired_pwm);
}

void DFRobotL298PShield::right_set_pwm(int16_t desired_pwm)
{
  // Sets the pwm value.  Will take negative pwm values.
  if (desired_pwm < 0)
  {
    digitalWrite(RIGHT_PWM, LOW);
    desired_pwm=-desired_pwm;
  }
  else
  {
    digitalWrite(RIGHT_PWM, HIGH);
  }

  if (desired_pwm>255)
    desired_pwm=255;
  
  analogWrite(RIGHT_EN, desired_pwm);
}
#include "DFRobotL298PShield.h"


// Constructor
DFRobotL298PShield::DFRobotL298PShield()
{
  // Initializes the pins
  pinMode(LEFT_PWM, OUTPUT);
  pinMode(LEFT_EN, OUTPUT);
  pinMode(RIGHT_PWM, OUTPUT);
  pinMode(RIGHT_EN, OUTPUT);
}


void DFRobotL298PShield::left_set_pwm(int16_t desired_pwm)
{
  // Sets the pwm value.  Will take negative pwm values.
  if (desired_pwm < 0)
  {
    digitalWrite(LEFT_EN, LOW);
    if (desired_pwm < -255)
      desired_pwm = -255;
    analogWrite(LEFT_PWM, -desired_pwm);
  }
  else
  {
    digitalWrite(LEFT_EN, HIGH);
    if (desired_pwm > 255)
      desired_pwm = 255;
    analogWrite(LEFT_PWM, desired_pwm);
  }
}

void DFRobotL298PShield::right_set_pwm(int16_t desired_pwm)
{
  if (desired_pwm > 255)
      desired_pwm = 255;
  else if(desired_pwm < -255)
      desired_pwm = -255;

  if (desired_pwm < 0)
  {
    digitalWrite(RIGHT_EN, LOW);
    analogWrite(RIGHT_PWM, desired_pwm);
  }
  else
  {
    digitalWrite(RIGHT_EN, HIGH);
    analogWrite(RIGHT_PWM, -desired_pwm);
  }
}

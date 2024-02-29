#include <AccelStepper.h>
#include "pin_map.h"

int default_speed = 200;
int default_max_speed = 400;

AccelStepper E0_motor(AccelStepper::DRIVER, E0_STEP_PIN, E0_DIR_PIN);
AccelStepper E1_motor(AccelStepper::DRIVER, E1_STEP_PIN, E1_DIR_PIN);
AccelStepper X_motor(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);

void setup() {
  // pinMode(E0_ENABLE_PIN, OUTPUT);
  // pinMode(E0_DIR_PIN, OUTPUT);
  // pinMode(E0_STEP_PIN, OUTPUT);

  // digitalWrite(E0_ENABLE_PIN, LOW);
  // digitalWrite(E0_DIR_PIN, HIGH);

  E0_motor.setEnablePin(E0_ENABLE_PIN);
  E0_motor.setPinsInverted(false, false, true);
  E0_motor.enableOutputs();
  E0_motor.setMaxSpeed(default_max_speed);
  E0_motor.setSpeed(default_speed);

  E1_motor.setEnablePin(E1_ENABLE_PIN);
  E1_motor.setPinsInverted(false, false, true);
  E1_motor.enableOutputs();
  E1_motor.setMaxSpeed(default_max_speed);
  E1_motor.setSpeed(default_speed);
  
  X_motor.setEnablePin(X_ENABLE_PIN);
  X_motor.setPinsInverted(false, false, true);
  X_motor.enableOutputs();
  X_motor.setMaxSpeed(default_max_speed);
  X_motor.setSpeed(default_speed);

  // X_motor.setMaxSpeed(400);
  // X_motor.setSpeed(200);
  // Y_motor.setMaxSpeed(400);
  // Y_motor.setSpeed(200);
  // Z_motor.setMaxSpeed(400);
  // Z_motor.setSpeed(200);
}

void loop() {
  // digitalWrite(E0_STEP_PIN, HIGH);
  // delayMicroseconds(1000);
  // digitalWrite(E0_STEP_PIN, LOW);

  E0_motor.runSpeed();
  E1_motor.runSpeed();
  X_motor.runSpeed();
  
}


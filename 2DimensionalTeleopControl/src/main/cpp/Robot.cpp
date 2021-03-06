// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

int x = 5;
int y = 10;

void Robot::RobotInit() {
  int example = 5;

  m_motor->RestoreFactoryDefaults();

  int f = 1000;
  int g = 200;
  int h = 30;
  int i = 1;
}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {
  drive.leftMotor->GetEncoder();
}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  drive.curvatureDrive();
  
  m_motor->Set(1.0);
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

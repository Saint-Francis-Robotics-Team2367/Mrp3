// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

int x = 5;
int y = 10;
float pi = 4.20;

void Robot::RobotInit() {
<<<<<<< HEAD
  int example = 5;
=======

  m_motor->RestoreFactoryDefaults();
>>>>>>> 0ff4989f093e57cf8faff766283144c6ad201dc3
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

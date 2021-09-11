// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

<<<<<<< HEAD
int x = 5000000; 
=======
int x = 5;


>>>>>>> c2d218ecb27a7d45b7023070e9dc21c1b2d49152

void Robot::RobotInit() {
}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {
  drive.leftMotor->GetEncoder();
}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  drive.curvatureDrive();
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

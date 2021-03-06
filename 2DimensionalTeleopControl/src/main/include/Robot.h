// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include "Drive.h"
#include <frc/TimedRobot.h>
#include <rev/CANSparkMax.h>
#include <frc/Joystick.h>
#define throttle_axis_id 5
#define steering_axis_id 0
#define quick_turn_button_id 1

int q = 3;

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void DisabledInit() override;
  void DisabledPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;

  const int motorID = 1;

  Drive drive = Drive(0, throttle_axis_id, steering_axis_id, quick_turn_button_id, 0.05, 0.1, true, false);
  rev::CANSparkMax *m_motor = new rev::CANSparkMax(motorID, rev::CANSparkMax::MotorType::kBrushless);
  rev::CANSparkMax *motor1 = new rev::CANSparkMax(1, rev::CANSparkMax::MotorType::kBrushless);

  frc::Joystick *j_x = new frc::Joystick(0);
};

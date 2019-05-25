/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <ctre/Phoenix.h>

using namespace frc;

class DrivetrainSubsystem : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  WPI_TalonSRX * frontLeftDrive;
  WPI_TalonSRX * frontRightDrive;
  WPI_VictorSPX * backLeftDrive;
  WPI_VictorSPX * backRightDrive;

 public:
  DrivetrainSubsystem();
  void InitDefaultCommand() override;
  void Drive(double leftSpeed, double rightSpeed);
};

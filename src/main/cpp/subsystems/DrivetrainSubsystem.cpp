/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/DrivetrainSubsystem.h"
#include "commands/GamepadDriveCommand.h"
#include "CommandBase.h"

DrivetrainSubsystem::DrivetrainSubsystem() : Subsystem("DrivetrainSubsystem") {
  frontLeftDrive = new WPI_VictorSPX(3);
  frontRightDrive = new WPI_TalonSRX(2);
  backLeftDrive = new WPI_TalonSRX(1);
  backRightDrive = new WPI_VictorSPX(0);

  frontLeftDrive->SetInverted(true);
  backLeftDrive->SetInverted(true);
}

void DrivetrainSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new GamepadDriveCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DrivetrainSubsystem::Drive(double leftSpeed, double rightSpeed)
{
  frontLeftDrive->Set(leftSpeed);
  frontRightDrive->Set(rightSpeed);
  backLeftDrive->Set(leftSpeed);
  backRightDrive->Set(rightSpeed);
}
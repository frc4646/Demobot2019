/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DrivetrainSubsystem.h"
#include "GamepadDriveCommand.h"
#include "CommandBase.h"

DrivetrainSubsystem::DrivetrainSubsystem() : Subsystem("DrivetrainSubsystem") {
  leftDrive = new Talon(0);
  rightDrive = new Talon(1);

  leftDrive->SetInverted(true);
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
  leftDrive->Set(leftSpeed);
  rightDrive->Set(rightSpeed);
}
/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GamepadDriveCommand.h"

GamepadDriveCommand::GamepadDriveCommand() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) drivetrain.get());
}

// Called just before this Command runs the first time
void GamepadDriveCommand::Initialize() {
  drivetrain->Drive(0,0);
}

// Called repeatedly when this Command is scheduled to run
void GamepadDriveCommand::Execute() {
  drivetrain->Drive(-oi->GetGamepadLeftStickY(), -oi->GetGamepadRightStickY());
}

// Make this return true when this Command no longer needs to run execute()
bool GamepadDriveCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void GamepadDriveCommand::End() {
  drivetrain->Drive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GamepadDriveCommand::Interrupted() {
  drivetrain->Drive(0,0);
}

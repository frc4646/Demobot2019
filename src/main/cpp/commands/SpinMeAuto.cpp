/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/SpinMeAuto.h"

SpinMeAuto::SpinMeAuto() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) drivetrain.get());
}

// Called just before this Command runs the first time
void SpinMeAuto::Initialize() {
  drivetrain->Drive(0,0);
}

// Called repeatedly when this Command is scheduled to run
void SpinMeAuto::Execute() {
  drivetrain->Drive(-0.5f, 0.5f);
}

// Make this return true when this Command no longer needs to run execute()
bool SpinMeAuto::IsFinished() { return false; }

// Called once after isFinished returns true
void SpinMeAuto::End() {
  drivetrain->Drive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinMeAuto::Interrupted() {
  drivetrain->Drive(0,0);
}

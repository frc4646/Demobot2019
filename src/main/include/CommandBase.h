/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include <frc/Commands/Command.h>
using namespace frc;

#include "OI.h"

#include <subsystems/DrivetrainSubsystem.h>
#include <subsystems/FlagWaver.h>

class CommandBase : public frc::Command {
 public:
  CommandBase(const std::string& name);
	CommandBase() = default;

	static void init();

	// Create a single static instance of all of your subsystems
	static std::unique_ptr<DrivetrainSubsystem> drivetrain;
	static std::unique_ptr<FlagWaver> flagwaver;
	static std::unique_ptr<OI> oi;

};
#endif

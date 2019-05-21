/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>

OI::OI() : gamepad(0) {
  // Process operator interface input here.
  
}

double OI::GetGamepadLeftStickY()
  {
    gamepad.GetY(GenericHID::JoystickHand::kLeftHand);
  }

  double OI::GetGamepadRightStickY()
  {
    gamepad.GetY(GenericHID::JoystickHand::kRightHand);
  }
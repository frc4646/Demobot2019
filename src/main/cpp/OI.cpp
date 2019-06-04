/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>
#include <stdio.h>
#include <iostream>

OI::OI() : gamepad(0) {
  // Process operator interface input here.
  
}

double OI::GetGamepadLeftStickY()
  {
    //printf("calling left stick");
    return gamepad.GetRawAxis(1);
  }

double OI::GetGamepadRightStickY()
{
    //printf("calling right stick");
    return gamepad.GetRawAxis(5);
}

double OI::GetGamepadLeftTrigger()
{
  return gamepad.GetRawAxis(2);
}

double OI::GetGamepadRightTrigger()
{
  return gamepad.GetRawAxis(3);
}
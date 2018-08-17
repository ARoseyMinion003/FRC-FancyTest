/**************
 * RobotMap.h *
 **************/
#include "WPILib.h"
#include "AHRS.h"
#include "ctre/Phoenix.h"

#pragma once

enum motorControllers {leftFrontDrive = 0, rightFrontDrive = 1};
enum encoders {leftDistance = 0, rightDistance = 1, armEncoder = 2};
enum solenoids {};
enum analogSensors {pressure = 0};
enum digitalSensors {wristIR = 0, cubeIR = 1};
enum joysticks{drjs = 0, opjs = 1};


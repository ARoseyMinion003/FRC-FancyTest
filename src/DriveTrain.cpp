/******************
 * DriveTrain.cpp *
 ******************/
#include <DriveTrain.h>

TalonSRX *LeftFrontDrive = new TalonSRX(leftFrontDrive);
VictorSPX *RightFrontDrive = new VictorSPX(rightFrontDrive);

void move(float speed, float rotate){
	LeftFrontDrive->Set(ControlMode::PercentOutput,speed+rotate);
	RightFrontDrive->Set(ControlMode::PercentOutput,speed+rotate);
}


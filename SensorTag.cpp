#include "SensorTag.h"

int SensorTag::initRead(){
	return initializeSensortag();
}

int SensorTag::disconnect(){
	return disconnectSensorTag();
}

int SensorTag::writeMovementConfig(){
	return SensorCommunication::writeMotionConfig(*this);
}

Motion_t SensorTag::getMotion() {
	return SensorCommunication::getMotion(*this);
}

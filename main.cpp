#include <iostream>
#include "SensorConfiguration.h"
#include "SensorCommunication.h"
#include "SensorTag.h"



int main(int argc, char** argv) {


//1. Aufgabe:
	SensorConfiguration scon;
	std::cout << "Groesse von scon: " << sizeof(scon) << std::endl;

	std::string testString;
	std::cout << "Groesse von testString: " << sizeof(testString) << std::endl;


	SensorCommunication scom;
	scom.getMotion(scon);

	SensorTag st;

	std::cout << "Size of sensoncomm with filled motor: " << sizeof(scom) << std::endl;
	std::cout << "Size of sensortag: " << sizeof(st) << std::endl;

	return 0;
}

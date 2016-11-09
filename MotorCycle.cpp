///**************************************************************************************************
/// file:	MotorCycle.cpp
/// <author>Joshua Wright</author>
/// <date>2016-11-09</date>
///*************************************************************************************************
#include"MotorCycle.hpp"
#include<sstream>
using namespace std;

namespace MotorVehicle
{

	unsigned MotorCycle::MotorCycleCount = 0;
	MotorCycle::MotorCycle(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, unsigned engineStroke, double weight, double engineSize,
		double horsepower, double mileage) : Vehicle(maker, model, color, year, price,
			numCylinders, weight, engineSize,
			horsepower, mileage) , engineStroke_(engineStroke) {
		++MotorCycleCount;
	}
	MotorCycle::MotorCycle() : Vehicle() {
		++MotorCycleCount;
		engineStroke_ = 0;
	}
	string MotorCycle::to_string() {
		stringstream ss; 
		ss << Vehicle::to_string();
		ss << setw(20) << left << "Engine stroke:" << engineStroke_ << endl;
		return ss.str();
	}
	MotorCycle::~MotorCycle() {
		--MotorCycleCount;
	}

	unsigned SuperBike::SuperBikeCount = 0;
	SuperBike::SuperBike(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, unsigned engineStroke, double weight, double engineSize,
		double horsepower, double mileage) : MotorCycle(maker, model, color, year, price,
			numCylinders,engineStroke,weight, engineSize,
			horsepower, mileage) {
		++SuperBikeCount;
	}
	SuperBike::SuperBike() : MotorCycle() {
		++SuperBikeCount;
	}
	SuperBike::~SuperBike() {
		--SuperBikeCount;
	}

	unsigned SportBike::SportBikeCount = 0;
	SportBike::SportBike(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, unsigned engineStroke, double weight, double engineSize,
		double horsepower, double mileage) : MotorCycle(maker, model, color, year, price,
			numCylinders, engineStroke, weight, engineSize,
			horsepower, mileage) {
		++SportBikeCount;
	}
	SportBike::SportBike() : MotorCycle() {
		++SportBikeCount;
	}
	SportBike::~SportBike() {
		--SportBikeCount;
	}
};
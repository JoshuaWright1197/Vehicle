///**************************************************************************************************
/// file:	Car.cpp
/// <author>Joshua Wright</author>
/// <date>2016-11-09</date>
///*************************************************************************************************
#include"Car.hpp"
#include<sstream>
using namespace std;

namespace MotorVehicle
{

	unsigned Car::CarCount = 0;
	Car::Car(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
		double horsepower, double mileage) : Vehicle(maker, model, color, year, price,
			numCylinders, weight, engineSize,
			horsepower, mileage), numDoors_(numDoors) {
		++CarCount;
	}
	Car::Car() : Vehicle() {
		++CarCount;
		numDoors_ = 0;
	}
	string Car::to_string() {
		stringstream ss;
		ss << Vehicle::to_string();
		ss << setw(20) << left << "Doors:" << numDoors_ << endl;
		return ss.str();
	}
	Car::~Car() {
		--CarCount;
	}

	unsigned SuperCar::SuperCarCount = 0;
	SuperCar::SuperCar(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
		double horsepower, double mileage) : Car(maker, model, color, year, price,
			numCylinders, weight, numDoors, engineSize,
			horsepower, mileage) {
		++SuperCarCount;
	}
	SuperCar::SuperCar() : Car() {
		++SuperCarCount;
	}
	SuperCar::~SuperCar() {
		--SuperCarCount;
	}

	unsigned SportCar::SportCarCount = 0;
	SportCar::SportCar(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
		double horsepower, double mileage) : Car(maker, model, color, year, price,
			numCylinders, weight, numDoors, engineSize,
			horsepower, mileage) {
		++SportCarCount;
	}
	SportCar::SportCar() : Car() {
		++SportCarCount;
	}
	SportCar::~SportCar() {
		--SportCarCount;
	}
};
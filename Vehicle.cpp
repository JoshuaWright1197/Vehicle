#include"Vehicle.hpp"
using namespace std;

namespace MotorVehicle
{
	unsigned Vehicle::VehicleCount = 0;

	Vehicle::Vehicle(std::string maker, std::string model, std::string color, unsigned year, double price,
		unsigned numCylinders, double weight, double engineSize,
		double horsepower, double mileage)
		:maker_(maker), model_(model), color_(color), year_(year), price_(price),
		numCylinders_(numCylinders), weight_(weight), engineSize_(engineSize),
		horsepower_(horsepower), mileage_(mileage) 
	{ ++VehicleCount; }

	Vehicle::Vehicle()
	{
		maker_ = "Unknown";
		model_ = "Unknown";
		color_ = "Unknown";
		numCylinders_ = 0;
		price_ = 0;
		weight_ = 0;
		engineSize_ = 0;
		mileage_ = 0;
		year_ = 0;
		horsepower_ = 0;
		++VehicleCount;
	}

	string Vehicle::to_string()
	{
		ostringstream oss;
		oss << setw(20) << left << "Type:"				<< string(typeid(*this).name()).substr(20) << endl;
		oss << setw(20) << "Maker:"		<< maker_ << endl;
		oss << setw(20) << "Model:"				<< model_ << endl;
		oss << setw(20) << "Year:"				<< year_ << endl;
		oss << setw(20) << "Color:"				<< color_ << endl;
		oss << setw(20) << "Horsepower:"		<< horsepower_ << endl;
		oss << setw(20) << "Engine Size(litre):"<< engineSize_ << endl;
		oss << setw(20) << "Cylinders:"			<< numCylinders_ << endl;
		oss << setw(20) << "Weight(Kg):"		<< weight_ << endl;
		oss << setw(20) << "Miles:"				<< mileage_ << endl;

		return oss.str();
	}

	Vehicle::~Vehicle() {
		--VehicleCount;
	}
};
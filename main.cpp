#include<iostream>
#include<vector>
#include<iomanip>
#include"MotorVehicle.hpp"
using namespace std;
using namespace MotorVehicle;

int main()
{
	vector<Vehicle::pointer_type> v;
	v.push_back(Vehicle::pointer_type(new SuperCar("Ferrari", "488 GTB", "Red", 2016, 250'000, 8, 1'475,2, 3.9, 670, 0)));
	v.push_back(Vehicle::pointer_type(new SuperBike("Yamaha", "R1", "Blue/white", 2016,16'500, 4, 4, 414,1, 200, 0)));

	for (auto i : v) {
		cout << i->to_string();
		cout << endl;
	}
	cout << endl;
	cout << setw(25) << left << "Total Vehicle(s):" << Vehicle::Get_Vehicle_Count() << endl;
	cout << setw(25) << "Total Car(s):" << Car::Get_Car_Count() << endl;
	cout << setw(25) << "Total MotorCycles(s):" << MotorCycle::Get_MotorCycle_Count() << endl;
	cout << setw(25) << "Total SuperCar(s):" << SuperCar::Get_SuperCar_Count() << endl;
	cout << setw(25) <<"Total SuperBiker(s):" << SuperBike::Get_SuperBike_Count() << endl;
}
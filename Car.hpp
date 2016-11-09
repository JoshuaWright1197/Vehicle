//**************************************************************************************************
/// file:	Car.hpp
/// <author>Joshua Wright</author>
/// <date>2016-11-08</date>
///*************************************************************************************************
#pragma once
#include"Vehicle.hpp"

namespace MotorVehicle
{
	///**************************************************************************************************
	///<summary> A car.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class Car : public Vehicle
	{
	public:
		typedef std::shared_ptr<Car> pointer_type;
		typedef std::unique_ptr<Car> upointer_type;

	private:
		static unsigned CarCount;

	protected:
		unsigned numDoors_;

	public:
		Car();

		///**************************************************************************************************
		///<summary> Initializes a new instance of the Car class.</summary>
		///<remarks> Joshua Wright, 2016-11-08.</remarks>
		///<param name="maker">		   [in] The maker.</param>
		///<param name="model">		   [in] The model.</param>
		///<param name="color">		   [in] The color.</param>
		///<param name="year">		   [in] The year.</param>
		///<param name="price">		   [in] The price.</param>
		///<param name="numCylinders"> [in] Number of cylinders.</param>
		///<param name="weight">	   [in] The weight.</param>
		///<param name="numDoors">	   [in] Number of doors.</param>
		///<param name="engineSize">   [in] Size of the engine.</param>
		///<param name="horsepower">   [in] The horsepower.</param>
		///<param name="mileage">	   [in] The mileage.</param>
		///*************************************************************************************************
		Car(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_Car_Count() { return CarCount; }
		std::string to_string() override;
		~Car();
	};

	///**************************************************************************************************
	///<summary> A supercar.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class SuperCar : public Car
	{
	public:
		typedef std::shared_ptr<SuperCar> pointer_type;
		typedef std::unique_ptr<SuperCar> upointer_type;

	private:
		static unsigned SuperCarCount;

	public:
		SuperCar();
		SuperCar(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_SuperCar_Count() { return SuperCarCount; }
		~SuperCar();
	};

	///**************************************************************************************************
	///<summary> A sportcar.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class SportCar : public Car
	{
	public:
		typedef std::shared_ptr<SportCar> pointer_type;
		typedef std::unique_ptr<SportCar> upointer_type;

	private:
		static unsigned SportCarCount;

	public:
		SportCar();
		SportCar(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, double weight, unsigned numDoors, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_SportCar_Count() { return SportCarCount; }
		~SportCar();
	};
};
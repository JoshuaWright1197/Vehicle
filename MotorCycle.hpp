///**************************************************************************************************
/// file:	MotorCycle.hpp
/// <author>Joshua Wright</author>
/// <date>2016-11-08</date>
///*************************************************************************************************
#pragma once
#include"Vehicle.hpp"

namespace MotorVehicle
{
	///**************************************************************************************************
	///<summary> A motor cycle.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class MotorCycle : public Vehicle
	{
	public:
		typedef std::shared_ptr<MotorCycle> pointer_type;
		typedef std::unique_ptr<MotorCycle> upointer_type;

	private:
		static unsigned MotorCycleCount;

	protected:
		unsigned engineStroke_;

	public:
		MotorCycle();

		///**************************************************************************************************
		///<summary> Initializes a new instance of the MotorCycle class.</summary>
		///<remarks> Joshua Wright, 2016-11-08.</remarks>
		///<param name="maker">		   [in] The maker.</param>
		///<param name="model">		   [in] The model.</param>
		///<param name="color">		   [in] The color.</param>
		///<param name="year">		   [in] The year.</param>
		///<param name="price">		   [in] The price.</param>
		///<param name="numCylinders"> [in] Number of cylinders.</param>
		///<param name="engineStroke"> [in] The engine stroke.</param>
		///<param name="weight">	   [in] The weight.</param>
		///<param name="engineSize">   [in] Size of the engine.</param>
		///<param name="horsepower">   [in] The horsepower.</param>
		///<param name="mileage">	   [in] The mileage.</param>
		///*************************************************************************************************
		MotorCycle(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, unsigned engineStroke,double weight, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_MotorCycle_Count() { return MotorCycleCount; }
		std::string to_string() override;
		~MotorCycle();
	};

	///**************************************************************************************************
	///<summary> A super bike.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class SuperBike : public MotorCycle
	{
	public:
		typedef std::shared_ptr<SuperBike> pointer_type;
		typedef std::unique_ptr<SuperBike> upointer_type;

	private:
		static unsigned SuperBikeCount;

	public:
		SuperBike();
		SuperBike(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, unsigned engineStroke, double weight, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_SuperBike_Count() { return SuperBikeCount; }
		~SuperBike();
	};

	///**************************************************************************************************
	///<summary> A sport bike.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class SportBike : public MotorCycle
	{
	public:
		typedef std::shared_ptr<SportBike> pointer_type;
		typedef std::unique_ptr<SportBike> upointer_type;

	private:
		static unsigned SportBikeCount;

	public:
		SportBike();
		SportBike(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, unsigned engineStroke, double weight, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_SportBike_Count() { return SportBikeCount; }
		~SportBike();
	};
};
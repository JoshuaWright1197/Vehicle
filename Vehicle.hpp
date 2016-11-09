///**************************************************************************************************
/// file:	Vehicle.hpp
/// <author>Joshua Wright</author>
/// <date>2016-11-08</date>
///*************************************************************************************************
#pragma once
#include<string>
#include<memory>
#include<sstream>
#include<vector>
#include<iomanip>

namespace MotorVehicle
{
	///**************************************************************************************************
	///<summary> A vehicle base class.</summary>
	///<remarks> Joshua Wright, 2016-11-08.</remarks>
	///*************************************************************************************************
	class Vehicle
	{
	public:
		typedef std::shared_ptr<Vehicle> pointer_type;
		typedef std::unique_ptr<Vehicle> upointer_type;

	private:
		static unsigned VehicleCount;

	protected:
		unsigned numCylinders_;
		std::string maker_;
		std::string model_;
		std::string color_;
		double price_;
		double weight_;
		double engineSize_;
		double mileage_;
		unsigned year_;
		double horsepower_;

	public:
		Vehicle();

		///**************************************************************************************************
		///<summary> Initializes a new instance of the Vehicle class.</summary>
		///<remarks> Joshua Wright, 2016-11-08.</remarks>
		///<param name="maker">		   [in] The maker.</param>
		///<param name="model">		   [in] The model.</param>
		///<param name="color">		   [in] The color.</param>
		///<param name="year">		   [in] The year.</param>
		///<param name="price">		   [in] The price.</param>
		///<param name="numCylinders"> [in] Number of cylinders.</param>
		///<param name="weight">	   [in] The weight.</param>
		///<param name="engineSize">   [in] Size of the engine.</param>
		///<param name="horsepower">   [in] The horsepower.</param>
		///<param name="mileage">	   [in] The mileage.</param>
		///*************************************************************************************************
		Vehicle(std::string maker, std::string model, std::string color, unsigned year, double price,
			unsigned numCylinders, double weight, double engineSize,
			double horsepower, double mileage);

		static unsigned Get_Vehicle_Count() { return VehicleCount; }

		unsigned getNumCylinders() const { return numCylinders_; }
		void setNumCylinders(unsigned val) { numCylinders_ = val; }
		std::string getMaker() const { return maker_; }
		void setMaker(std::string val) { maker_ = val; }
		std::string getModel() const { return model_; }
		void setModel(std::string val) { model_ = val; }
		double getPrice() const { return price_; }
		void setPrice(double val) { price_ = val; }
		double getWeight() const { return weight_; }
		void setWeight(double val) { weight_ = val; }
		double getMileage() const { return mileage_; }
		void setMileage(double val) { mileage_ = val; }
		unsigned getYear() const { return year_; }
		void setYear(unsigned val) { year_ = val; }
		double getEngineSize() const { return engineSize_; }
		void setEngineSize(double val) { engineSize_ = val; }
		double getHorsepower() const { return horsepower_; }
		void setHorsepower(double val) { horsepower_ = val; }
		std::string getColor() const { return color_; }
		void setColor(std::string val) { color_ = val; }

		virtual std::string to_string();
		virtual ~Vehicle();
	};
};
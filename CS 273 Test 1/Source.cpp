//I affirm that all the code given below was written solely by me, Julia Abbott, and that any help I recieved adheread to the rules stated for this exam.

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace Exam1 // NAMESPACE
{
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }

	};

	// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	class Vehicle
	{
	protected:
		string _color;
		int _topspeed;
		vector<Wheel> wheels;

	public:
		Vehicle(string color) {
			_color = color;
		}
		Vehicle() {};
		Vehicle(int topspeed) { _topspeed = topspeed; }
		string getColor() { return _color; }


		virtual void Description() = 0;
	};

	// STEP 2:  Define the RaceCar, Sedan, and Pickup classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.
	class RaceCar :public Vehicle {
	public:
		RaceCar(int topspeed = 250) : Vehicle(_topspeed) {};
		RaceCar(string color) : Vehicle(_color) {};
		RaceCar(int rad = 381) : Vehicle(wheels.push_back(rad));


		void Description()
		{
			cout << "I am a " + _color + " racecar that has a topspeed of 250 mph.\n";
		}

		//Top speed: 250mph
		//Wheel radius: 305mm
		RaceCar(string color)
		{
			_color = color;
		}
	};

	class Sedan :public Vehicle {
	public:
		Sedan(int topspeed = 95) : Vehicle(_topspeed) {};
		Sedan(string color) : Vehicle(_color) {};
		Sedan(int rad = 381) : Vehicle(wheels.push_back(rad));

		void Description() {
			cout << "I am a " + _color + " sedan that has a topspeed of 95 mph.\n";
		};
		//Top speed: 95mph
		//Wheel radius: 381mm
		Sedan(string color, int seats)
		{
			_color = color;
			number_of_seats = seats;
		}
		Sedan(string color)
		{
			_color = color;
		}
	private:
		int number_of_seats;

	};

	class Pickup : public Vehicle {
	public:
		Pickup(int topspeed = 85) : Vehicle(_topspeed) {};
		Pickup(string color) : Vehicle(_color) {};
		Pickup(int rad = 432) : Vehicle(wheels.push_back(rad));
		void Description()
		{
			cout << "I am a " + _color + " pickup truck that has a topspeed of 85 mph.\n";
		}
		Pickup() {};
		Pickup(string color, int capacity)
		{
			_color = color;
			hauling_capacity = capacity;

		}

	private:
		int hauling_capacity;
		//Top speed: 85mph
		//Wheel radius: 432mm

	};
}


int main()
{
	Exam1::Vehicle * Garage[3];

	// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
	// in the Garage array.  Remember the classes are defined in the namespace Exam1.
	Exam1::RaceCar racecar1("red");
	Exam1::Sedan sedan1("blue", 6);
	Exam1::Pickup pickup1("green", 3);

	Garage[0] = { &racecar1 };
	Garage[1] = { &sedan1 };
	Garage[2] = { &pickup1 };

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		Garage[i]->Description();
	}
}

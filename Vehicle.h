#pragma once
#include <iostream>
#include <string>


template<class T>
class Vehicle
{
public:
	Vehicle(){}
	void printFuelInfo() {
		_fuel.info();
	}
private:
	T _fuel;
};

class ElectroFuel {
public:
	ElectroFuel() {}
	void info();
private:

};


class ElectroBicycle : public Vehicle<ElectroFuel> {
public:
	ElectroBicycle(const std::string name) ;
	const  void printElectroBicycleInfo() {
		std::cout << _name << std::endl;
	}
private:
	std::string _name;
};



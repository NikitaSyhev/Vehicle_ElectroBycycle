//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Vehicle.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	

	Vehicle<ElectroFuel> V;

	V.printFuelInfo();


	ElectroBicycle EB("Electro");

	EB.printElectroBicycleInfo();
	EB.printFuelInfo();


















	return 0;
}
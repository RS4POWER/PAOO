#include "Car.h"
#include "ElectricCar.h"
#include "HybridCar.h"
#include <iostream>

using namespace Vehicles;

int main() {
    std::cout << "----- Car -----" << std::endl;
    Vehicles::Car car("Toyota", 2022, 30000.0);
    car.DisplayInfo();
    std::cout << std::endl;

    std::cout << "----- ElectricCar -----" << std::endl;
    Vehicles::ElectricCar electricCar("Tesla", 2022, 80000.0, 75.0);
    electricCar.DisplayInfo();
    std::cout << "Battery Capacity: " << electricCar.GetBatteryCapacity() << " kWh" << std::endl;
    std::cout << std::endl;

    std::cout << "----- HybridCar -----" << std::endl;
    Vehicles::HybridCar hybridCar("Toyota", 2022, 35000.0, 45.0);
    hybridCar.DisplayInfo();
    std::cout << "Fuel Capacity: " << hybridCar.GetFuelCapacity() << " gallons" << std::endl;

    std::cout << "----- Copy Assignment Operator -----" << std::endl;
    Vehicles::Car carCopy;
    carCopy = car;
    carCopy.DisplayInfo();
    std::cout << std::endl;

    std::cout << "----- Move Assignment Operator -----" << std::endl;
    Vehicles::Car carMove;
    carMove = std::move(car);
    carMove.DisplayInfo();
    car.DisplayInfo(); // Verificare că obiectul sursă a fost "mutat"
    std::cout << std::endl;

    return 0;
}

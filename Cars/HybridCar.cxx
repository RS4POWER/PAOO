#include "HybridCar.h"
#include <iostream>

namespace Vehicles {
    HybridCar::HybridCar(const char* brand, int year, double price, double fuelCapacity)
        : Car(brand, year, price), fuelCapacity(fuelCapacity) {}

    void HybridCar::DisplayInfo() const {
        Car::DisplayInfo();
        std::cout << "Fuel Capacity: " << GetFuelCapacity() << " gallons" << std::endl;
    }

    double HybridCar::calculatePower() const {
        return GetFuelCapacity() * 0.8;
    }

    double HybridCar::GetFuelCapacity() const {
        return fuelCapacity;
    }
    double HybridCar::calculatePowerInterface() const {
        return fuelCapacity * 0.75; 
    } // namespace Vehicles
}
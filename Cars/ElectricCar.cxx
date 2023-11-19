#include "ElectricCar.h"
#include <iostream>

namespace Vehicles {
    ElectricCar::ElectricCar(const char* brand, int year, double price, double batteryCapacity)
        : Car(brand, year, price), batteryCapacity(batteryCapacity) {}

    void ElectricCar::DisplayInfo() const {
        Car::DisplayInfo();
        std::cout << "Battery Capacity: " << GetBatteryCapacity() << " kWh" << std::endl;
    }

    double ElectricCar::calculatePower() const {
        // Implementare specifică pentru calculul puterii unei mașini electrice
        return GetBatteryCapacity() * 1.21; 
    }

    double ElectricCar::GetBatteryCapacity() const {
        return batteryCapacity;
    }
    double ElectricCar::calculatePowerInterface() const {
        return batteryCapacity * 1.41; 
    } // namespace Vehicles
}
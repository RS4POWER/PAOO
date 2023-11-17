#include "ElectricCar.h"
#include <iostream>

namespace Vehicles {
    ElectricCar::ElectricCar() : Car(), batteryCapacity(0.0) {
        std::cout << "ElectricCar constructor called." << std::endl;
    }

    ElectricCar::ElectricCar(const char* brand, int year, double price, double batteryCapacity)
        : Car(brand, year, price), batteryCapacity(batteryCapacity) {
        std::cout << "ElectricCar custom constructor called." << std::endl;
    }

    void ElectricCar::SetBatteryCapacity(double batteryCapacity) {
        this->batteryCapacity = batteryCapacity;
    }

    double ElectricCar::GetBatteryCapacity() const {
        return batteryCapacity;
    }
} // namespace Vehicles

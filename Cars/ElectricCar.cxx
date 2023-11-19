#include "ElectricCar.h"
#include <iostream>

namespace Vehicles {
    ElectricCar::ElectricCar(const char* brand, int year, double price, double batteryCapacity)
        : Car(brand, year, price), batteryCapacity(batteryCapacity) {
        std::cout << "ElectricCar Constructor: " << brand << std::endl;
    }

    ElectricCar::ElectricCar(const ElectricCar& other)
        : Car(other), batteryCapacity(other.batteryCapacity) {
        std::cout << "ElectricCar Copy Constructor: " << GetBrand() << std::endl;
    }

    ElectricCar::ElectricCar(ElectricCar&& other) noexcept
        : Car(std::move(other)), batteryCapacity(other.batteryCapacity) {
        other.batteryCapacity = 0.0;  // Invalidăm resursa în obiectul sursă
        std::cout << "ElectricCar Move Constructor: " << GetBrand() << std::endl;
    }

    ElectricCar& ElectricCar::operator=(const ElectricCar& other) {
        if (this != &other) {
            Car::operator=(other);
            batteryCapacity = other.batteryCapacity;
            std::cout << "ElectricCar Copy Assignment Operator: " << GetBrand() << std::endl;
        }
        return *this;
    }

    ElectricCar& ElectricCar::operator=(ElectricCar&& other) noexcept {
        if (this != &other) {
            Car::operator=(std::move(other));
            batteryCapacity = other.batteryCapacity;
            other.batteryCapacity = 0.0;  // Invalidăm resursa în obiectul sursă
            std::cout << "ElectricCar Move Assignment Operator: " << GetBrand() << std::endl;
        }
        return *this;
    }

    ElectricCar::~ElectricCar() {
        std::cout << "ElectricCar Destructor: " << GetBrand() << std::endl;
    }

    void ElectricCar::DisplayInfo() const {
        Car::DisplayInfo();
        std::cout << "Battery Capacity: " << GetBatteryCapacity() << " kWh" << std::endl;
    }

    double ElectricCar::calculatePower() const {
        return GetBatteryCapacity() * 1.21; // Un exemplu simplificat
    }

    double ElectricCar::GetBatteryCapacity() const {
        return batteryCapacity;
    }

    double ElectricCar::calculatePowerInterface() const {
        return batteryCapacity * 1.21; 
    }
} // namespace Vehicles

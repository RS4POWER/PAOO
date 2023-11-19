#include "HybridCar.h"
#include <iostream>

namespace Vehicles {
    HybridCar::HybridCar(const char* brand, int year, double price, double fuelCapacity)
        : Car(brand, year, price), fuelCapacity(fuelCapacity) {
        std::cout << "HybridCar Constructor: " << brand << std::endl;
    }

    HybridCar::HybridCar(const HybridCar& other)
        : Car(other), fuelCapacity(other.fuelCapacity) {
        std::cout << "HybridCar Copy Constructor: " << GetBrand() << std::endl;
    }

    HybridCar::HybridCar(HybridCar&& other) noexcept
        : Car(std::move(other)), fuelCapacity(other.fuelCapacity) {
        other.fuelCapacity = 0.0;  // Invalidăm resursa în obiectul sursă
        std::cout << "HybridCar Move Constructor: " << GetBrand() << std::endl;
    }

    HybridCar& HybridCar::operator=(const HybridCar& other) {
        if (this != &other) {
            Car::operator=(other);
            fuelCapacity = other.fuelCapacity;
            std::cout << "HybridCar Copy Assignment Operator: " << GetBrand() << std::endl;
        }
        return *this;
    }

    HybridCar& HybridCar::operator=(HybridCar&& other) noexcept {
        if (this != &other) {
            Car::operator=(std::move(other));
            fuelCapacity = other.fuelCapacity;
            other.fuelCapacity = 0.0;  // Invalidăm resursa în obiectul sursă
            std::cout << "HybridCar Move Assignment Operator: " << GetBrand() << std::endl;
        }
        return *this;
    }

    HybridCar::~HybridCar() {
        std::cout << "HybridCar Destructor: " << GetBrand() << std::endl;
    }

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
    }
} // namespace Vehicles

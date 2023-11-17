#include "HybridCar.h"
#include <iostream>

namespace Vehicles {
    HybridCar::HybridCar() : Car(), fuelCapacity(0.0) {
        std::cout << "HybridCar constructor called." << std::endl;
    }

    HybridCar::HybridCar(const char* brand, int year, double price, double fuelCapacity)
        : Car(brand, year, price), fuelCapacity(fuelCapacity) {
        std::cout << "HybridCar custom constructor called." << std::endl;
    }

    void HybridCar::SetFuelCapacity(double fuelCapacity) {
        this->fuelCapacity = fuelCapacity;
    }

    double HybridCar::GetFuelCapacity() const {
        return fuelCapacity;
    }
} // namespace Vehicles

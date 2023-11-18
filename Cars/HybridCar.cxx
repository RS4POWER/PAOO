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
        // Implementare specifică pentru calculul puterii unei mașini hibriză
        return GetFuelCapacity() * 0.8; // Un exemplu simplificat
    }

    double HybridCar::GetFuelCapacity() const {
        return fuelCapacity;
    }
    double HybridCar::calculatePowerInterface() const {
        // Implementează logica pentru calculul puterii pentru mașina hibridă
        // Poți folosi atributele clasei pentru a calcula puterea
        return fuelCapacity * 0.75; // Exemplu de calcul fictiv
    } // namespace Vehicles
}
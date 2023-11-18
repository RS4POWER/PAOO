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
        return GetBatteryCapacity() * 1.21; // Un exemplu simplificat
    }

    double ElectricCar::GetBatteryCapacity() const {
        return batteryCapacity;
    }
    double ElectricCar::calculatePowerInterface() const {
        // Implementează logica pentru calculul puterii pentru mașina electrică
        // Poți folosi atributele clasei pentru a calcula puterea
        return batteryCapacity * 1.21; // Exemplu de calcul fictiv
    } // namespace Vehicles
}
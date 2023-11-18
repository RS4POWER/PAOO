#pragma once
#include "Car.h"
#include "PowerCalculator.h"

namespace Vehicles {
    class HybridCar : public Car, public Utilities::PowerCalculator {
    private:
        double fuelCapacity;

    public:
        HybridCar(const char* brand, int year, double price, double fuelCapacity);

        void DisplayInfo() const;

        double calculatePower() const override;

        double GetFuelCapacity() const;

        double calculatePowerInterface() const override;
    };
} // namespace Vehicles

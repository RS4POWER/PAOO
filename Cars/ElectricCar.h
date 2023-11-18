#pragma once
#include "Car.h"
#include "PowerCalculator.h"

namespace Vehicles {
    class ElectricCar : public Car, public Utilities::PowerCalculator {
    private:
        double batteryCapacity;

    public:
        ElectricCar(const char* brand, int year, double price, double batteryCapacity);

        void DisplayInfo() const;

        double calculatePower() const override;

        double GetBatteryCapacity() const;
        double calculatePowerInterface() const override;
    };
} // namespace Vehicles

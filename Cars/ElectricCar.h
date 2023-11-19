#pragma once
#include "Car.h"
#include "PowerCalculator.h"

namespace Vehicles {
    class ElectricCar : public Car, public Utilities::PowerCalculator {
    private:
        double batteryCapacity;

    public:
        ElectricCar(const char* brand, int year, double price, double batteryCapacity);

        // Constructor de copiere
        ElectricCar(const ElectricCar& other);

        // Constructor de mutare
        ElectricCar(ElectricCar&& other) noexcept;

        // Operator de atribuire de copiere
        ElectricCar& operator=(const ElectricCar& other);

        // Operator de atribuire de mutare
        ElectricCar& operator=(ElectricCar&& other) noexcept;

        // Destructor
        ~ElectricCar();

        void DisplayInfo() const;

        double calculatePower() const override;

        double GetBatteryCapacity() const;
        double calculatePowerInterface() const override;
    };
} // namespace Vehicles

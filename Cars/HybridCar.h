#pragma once
#include "Car.h"
#include "PowerCalculator.h"

namespace Vehicles {
    class HybridCar : public Car, public Utilities::PowerCalculator {
    private:
        double fuelCapacity;

    public:
        HybridCar(const char* brand, int year, double price, double fuelCapacity);

        // Constructor de copiere
        HybridCar(const HybridCar& other);

        // Constructor de mutare
        HybridCar(HybridCar&& other) noexcept;

        // Operator de atribuire de copiere
        HybridCar& operator=(const HybridCar& other);

        // Operator de atribuire de mutare
        HybridCar& operator=(HybridCar&& other) noexcept;

        // Destructor
        ~HybridCar();

        void DisplayInfo() const;

        double calculatePower() const override;

        double GetFuelCapacity() const;

        double calculatePowerInterface() const override;
    };
} // namespace Vehicles

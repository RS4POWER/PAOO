#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "Car.h"

namespace Vehicles {
    class HybridCar : public Car {
    public:
        HybridCar();
        HybridCar(const char* brand, int year, double price, double fuelCapacity);

        void SetFuelCapacity(double fuelCapacity);
        double GetFuelCapacity() const;

    private:
        double fuelCapacity;
    };
} // namespace Vehicles

#endif // HYBRIDCAR_H

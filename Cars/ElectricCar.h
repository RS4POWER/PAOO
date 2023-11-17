#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

namespace Vehicles {
    class ElectricCar : public Car {
    public:
        ElectricCar();
        ElectricCar(const char* brand, int year, double price, double batteryCapacity);

        void SetBatteryCapacity(double batteryCapacity);
        double GetBatteryCapacity() const;

    private:
        double batteryCapacity;
    };
} // namespace Vehicles

#endif // ELECTRICCAR_H

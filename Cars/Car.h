#ifndef CAR_H
#define CAR_H

#include <iostream>
#pragma once

namespace Vehicles {
    class CarInterface {
    public:
        virtual ~CarInterface() = default;
        virtual void DisplayInfo() const = 0;
        virtual double calculatePowerInterface() const = 0;  // Adaugă funcția pur virtuală
    };

    class Car : public CarInterface {
    private:
        const char* brand;
        int year;
        double price;

    public:
        Car(const char* brand, int year, double price);

        void DisplayInfo() const override;

        const char* GetBrand() const;
        int GetYear() const;
        double GetPrice() const;

        // Functie virtuala de implementat in fiecare clasa aparte.
        double calculatePowerInterface() const = 0;
    };
} // namespace Vehicles

#endif


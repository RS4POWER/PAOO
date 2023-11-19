#ifndef CAR_H
#define CAR_H

#include <iostream>
#pragma once

namespace Vehicles {
    class CarInterface {
    public:
        virtual ~CarInterface() = default;
        virtual void DisplayInfo() const = 0;
        virtual double calculatePowerInterface() const = 0;
    };

    class Car : public CarInterface {
    private:
        const char* brand;
        int year;
        double price;

    public:
        Car(const char* brand, int year, double price);
        Car(const Car& other);  // Constructor de copiere
        Car(Car&& other) noexcept;  // Constructor de mutare

        Car& operator=(const Car& other);  // Operator de atribuire de copiere
        Car& operator=(Car&& other) noexcept;  // Operator de atribuire de mutare

        ~Car();  // Destructor

        void DisplayInfo() const override;
        const char* GetBrand() const;
        int GetYear() const;
        double GetPrice() const;
        double calculatePowerInterface() const = 0;
    };
} // namespace Vehicles


#endif


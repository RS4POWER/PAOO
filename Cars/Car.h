#ifndef CAR_H
#define CAR_H

#include <iostream>
#pragma once
namespace Vehicles {
    class Car {
    public:
        Car();
        Car(const char* brand, int year, double price);
        Car(const Car& other);
        Car(Car&& other) noexcept;
        virtual ~Car(); // Trebuie să fie virtuală pentru a asigura apelul destructorului derivatelor.

        Car& operator=(const Car& other);

        void SetBrand(const char* brand);
        const char* GetBrand() const;
        void SetYear(int year);
        int GetYear() const;
        void SetPrice(double price);
        double GetPrice() const;

        virtual void DisplayInfo() const; // Adaugare functie virtuala DisplayInfo
        friend std::ostream& operator<<(std::ostream& os, const Car& car);

    private:
        char* brand;
        int year;
        double price;

        void CopyData(const Car& other);
        void ReleaseData();
    };
} // namespace Vehicles

#endif // CAR_HP

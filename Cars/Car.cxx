#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Car.h"
#include <iostream>

namespace Vehicles {
    Car::Car(const char* brand, int year, double price)
        : brand(brand), year(year), price(price) {
        std::cout << "Car Constructor: " << brand << std::endl;
    }

    Car::Car(const Car& other)
        : brand(other.brand), year(other.year), price(other.price) {
        std::cout << "Car Copy Constructor: " << brand << std::endl;
    }

    Car::Car(Car&& other) noexcept
        : brand(other.brand), year(other.year), price(other.price) {
        other.brand = nullptr;  // Mutăm resursa, invalidând-o în obiectul sursă
        std::cout << "Car Move Constructor: " << brand << std::endl;
    }

    Car& Car::operator=(const Car& other) {
        if (this != &other) {
            // Eliberăm resursele actuale (dacă este necesar)
            // Nu este necesar în cazul pointerului const char*, dar poate fi în alte cazuri

            // Copiem valorile
            brand = other.brand;
            year = other.year;
            price = other.price;

            std::cout << "Car Copy Assignment Operator: " << brand << std::endl;
        }
        return *this;
    }

    Car& Car::operator=(Car&& other) noexcept {
        if (this != &other) {
            // Eliberăm resursele actuale (dacă este necesar)
            // Nu este necesar în cazul pointerului const char*, dar poate fi în alte cazuri

            // Mutăm valorile și invalidăm resursa în obiectul sursă
            brand = other.brand;
            year = other.year;
            price = other.price;
            other.brand = nullptr;

            std::cout << "Car Move Assignment Operator: " << brand << std::endl;
        }
        return *this;
    }

    Car::~Car() {
        // Nu este necesară eliberarea fiindca nu am alocat dinamic
        std::cout << "Car Destructor: " << brand << std::endl;
    }

    void Car::DisplayInfo() const {
        std::cout << "Brand: " << GetBrand() << ", Year: " << GetYear() << ", Price: $" << GetPrice() << std::endl;
    }

    const char* Car::GetBrand() const {
        return brand;
    }

    int Car::GetYear() const {
        return year;
    }

    double Car::GetPrice() const {
        return price;
    }
} // namespace Vehicles

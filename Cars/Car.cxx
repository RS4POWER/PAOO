#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Car.h"
#include <iostream>

namespace Vehicles {
    Car::Car(const char* brand, int year, double price)
        : brand(brand), year(year), price(price) {}

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


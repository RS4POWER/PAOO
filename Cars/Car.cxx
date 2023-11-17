#define _CRT_SECURE_NO_WARNINGS
#include "Car.hpp"
#include <cstring>

namespace Vehicles {
    Car::Car() : brand(nullptr), year(0), price(0.0) {
        std::cout << "Constructor implicit called." << std::endl;
    }

    Car::Car(const char* brand, int year, double price) : year(year), price(price) {
        std::cout << "Constructor personalizat called." << std::endl;
        if (brand) {
            size_t length = strlen(brand);
            this->brand = new char[length + 1];
            strcpy(this->brand, brand);
        }
        else {
            this->brand = nullptr;
        }
    }

    Car::Car(const Car& other) : year(other.year), price(other.price) {
        std::cout << "Copy constructor called." << std::endl;
        CopyData(other);
    }

    Car::Car(Car&& other) noexcept : brand(other.brand), year(other.year), price(other.price) {
        std::cout << "Move constructor called." << std::endl;
        other.brand = nullptr;
        other.year = 0;
        other.price = 0.0;
    }

    Car::~Car() {
        std::cout << "Destructor called." << std::endl;
        ReleaseData();
    }

    Car& Car::operator=(const Car& other) {
        if (this == &other) {
            return *this;
        }

        year = other.year;
        price = other.price;
        ReleaseData();
        CopyData(other);

        return *this;
    }

    void Car::SetBrand(const char* brand) {
        if (this->brand) {
            delete[] this->brand;
        }
        size_t length = strlen(brand);
        this->brand = new char[length + 1];
        strcpy(this->brand, brand);
    }

    const char* Car::GetBrand() const {
        return brand;
    }

    void Car::SetYear(int year) {
        this->year = year;
    }

    int Car::GetYear() const {
        return year;
    }

    void Car::SetPrice(double price) {
        this->price = price;
    }

    double Car::GetPrice() const {
        return price;
    }

    void Car::CopyData(const Car& other) {
        if (other.brand) {
            size_t length = strlen(other.brand);
            this->brand = new char[length + 1];
            strcpy(this->brand, other.brand);
        }
        else {
            this->brand = nullptr;
        }
    }

    void Car::DisplayInfo() const {
        std::cout << "Brand: " << brand << ", Year: " << year << ", Price: " << price << std::endl;
    }

    void Car::ReleaseData() {
        if (brand) {
            delete[] brand;
            brand = nullptr;
        }
    }

    std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Brand: " << car.brand << ", Year: " << car.year << ", Price: " << car.price;
        return os;
    }
} // namespace Vehicles

#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include <cstring>
#include <iostream>

Car::Car() : brand(nullptr), year(0), price(0.0) {
    std::cout << "Constructor implicit called." << std::endl;
}

Car::Car(const char* brand, int year, double price) : year(year), price(price) {
    std::cout << "Constructor personalizat called." << std::endl;
    if(brand)
    {
        size_t length = strlen(brand);
        this->brand = new char [length +1];
        strncpy(this->brand, brand, length+1);
    }
    else
    {
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

void Car::SetBrand(const char* brand) {
    if (this->brand) {
        delete[] this->brand;
    }
    size_t length = strlen(brand);
    this->brand = new char[length + 1];
    strncpy(this->brand, brand, length +1);
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
    if(other.brand)
    {
        size_t length = strlen(other.brand);
        this->brand = new char[length + 1 ];
        strncpy(this->brand, other.brand, length + 1);
    }
    else
    {
        this->brand = nullptr;
    }
}

void Car::ReleaseData() {
    if (brand) {
        delete[] brand;
        brand = nullptr;
    }
}

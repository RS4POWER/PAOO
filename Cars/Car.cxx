#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include <cstring>
#include <iostream>

Car::Car() : brand(nullptr), year(0), price(0.0) {
    std::cout << "Constructor implicit called." << std::endl;
}

Car::Car(const char* brand, int year, double price) : year(year), price(price) {
    std::cout << "Constructor personalizat called." << std::endl;
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
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
    this->brand = new char[strlen(brand) + 1];
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
    this->brand = new char[strlen(other.brand) + 1];
    strcpy(this->brand, other.brand);
}

void Car::ReleaseData() {
    if (brand) {
        delete[] brand;
        brand = nullptr;
    }
}

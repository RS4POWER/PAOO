#include "Car.h"
#include <iostream>

int main() {
    // Constructor implicit
    std::cout << "----- Constructor implicit -----" << std::endl;
    Car car1; // Constructor implicit
    std::cout << "Car 1 Created" << std::endl;

    // Constructor personalizat
    std::cout << "----- Constructor personalizat -----" << std::endl;
    Car car2("Toyota", 2020, 25000.0); // Constructor personalizat
    std::cout << "Car 2 Created" << std::endl;

    // Copy constructor
    std::cout << "----- Copy constructor -----" << std::endl;
    Car car3 = car2; // Copy constructor
    std::cout << "Car 3 (Copy of Car 2) Created" << std::endl;

    // Modificarea brand-ului pentru car2
    car2.SetBrand("Honda");

    // Move constructor
    std::cout << "----- Move constructor -----" << std::endl;
    Car car4(std::move(car2)); // Move constructor
    std::cout << "Car 4 (Moved from Car 2) Created" << std::endl;

    // Verificarea stării obiectelor
    std::cout << "----- State of Objects -----" << std::endl;
    if (car1.GetBrand()) {
        std::cout << "Car 1 Brand: " << car1.GetBrand() << ", Year: " << car1.GetYear() << ", Price: " << car1.GetPrice() << std::endl;
    }
    else {
        std::cout << "Car 1 has no brand." << std::endl;
    }
    if (car2.GetBrand()) {
        std::cout << "Car 2 Brand: " << car2.GetBrand() << ", Year: " << car2.GetYear() << ", Price: " << car2.GetPrice() << std::endl;
    }
    else {
        std::cout << "Car 2 has no brand." << std::endl;
    }
    if (car3.GetBrand()) {
        std::cout << "Car 3 Brand: " << car3.GetBrand() << ", Year: " << car3.GetYear() << ", Price: " << car3.GetPrice() << std::endl;
    }
    else {
        std::cout << "Car 3 has no brand." << std::endl;
    }
    if (car4.GetBrand()) {
        std::cout << "Car 4 Brand: " << car4.GetBrand() << ", Year: " << car4.GetYear() << ", Price: " << car4.GetPrice() << std::endl;
    }
    else {
        std::cout << "Car 4 has no brand." << std::endl;
    }

    return 0;
}


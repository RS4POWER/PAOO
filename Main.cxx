#include "Car.h"
#include <iostream>

int main() { 
    // Crearea obiectelor Car și demonstrarea constructorilor și destructorilor
    {
        Car car1; // Constructor implicit
        std::cout << "Car 1 Created" << std::endl;

        Car car2("Toyota", 2020, 25000.0); // Constructor personalizat
        std::cout << "Car 2 Created" << std::endl;

        {
            Car car3 = car2; // Copy constructor
            std::cout << "Car 3 (Copy of Car 2) Created" << std::endl;
        }
        std::cout << "Car 3 Destroyed" << std::endl;

        {
            Car car4(std::move(car2)); // Move constructor
            std::cout << "Car 4 (Moved from Car 2) Created" << std::endl;
        }
        std::cout << "Car 4 Destroyed" << std::endl;
    }

    return 0;
}
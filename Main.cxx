#include "Car.h"
#include "ElectricCar.h"
#include "HybridCar.h"
#include <iostream>

int main() {
    // Exemplu cu mașină electrică în namespace-ul Vehicles
    std::cout << "======= Electric Car Example in Vehicles Namespace =======" << std::endl;

    // Creare obiect ElectricCar utilizând constructorul
    std::cout << "Creating ElectricCar object:" << std::endl;
    Vehicles::ElectricCar electricCar("Tesla", 2022, 80000.0, 75.0);

    // Afisare informatii inainte de operatii de copiere/mutare
    std::cout << "Displaying Electric Car Information Before Operations:" << std::endl;
    electricCar.DisplayInfo();

    // Copiere ElectricCar folosind constructorul de copiere personalizat
    std::cout << "Creating a copy of ElectricCar using Copy Constructor:" << std::endl;
    Vehicles::ElectricCar electricCarCopy = electricCar;

    // Afisare informatii dupa operatia de copiere
    std::cout << "Displaying Electric Car Information After Copy Operation:" << std::endl;
    electricCarCopy.DisplayInfo();

    // Mutare ElectricCar folosind operatorul de mutare personalizat
    std::cout << "Moving ElectricCar using Move Assignment Operator:" << std::endl;
    Vehicles::ElectricCar electricCarMoved = std::move(electricCar);

    // Afisare informatii dupa operatia de mutare
    std::cout << "Displaying Electric Car Information After Move Operation:" << std::endl;
    electricCarMoved.DisplayInfo();

    std::cout << std::endl;

    // Exemplu cu mașină hibridă în namespace-ul Vehicles
    std::cout << "======= Hybrid Car Example in Vehicles Namespace =======" << std::endl;

    // Creare obiect HybridCar utilizând constructorul
    std::cout << "Creating HybridCar object:" << std::endl;
    Vehicles::HybridCar hybridCar("Toyota", 2022, 35000.0, 45.0);

    // Afisare informatii inainte de operatii de copiere/mutare
    std::cout << "Displaying Hybrid Car Information Before Operations:" << std::endl;
    hybridCar.DisplayInfo();

    // Copiere HybridCar folosind constructorul de copiere personalizat
    std::cout << "Creating a copy of HybridCar using Copy Constructor:" << std::endl;
    Vehicles::HybridCar hybridCarCopy = hybridCar;

    // Afisare informatii dupa operatia de copiere
    std::cout << "Displaying Hybrid Car Information After Copy Operation:" << std::endl;
    hybridCarCopy.DisplayInfo();

    // Mutare HybridCar folosind operatorul de mutare personalizat
    std::cout << "Moving HybridCar using Move Assignment Operator:" << std::endl;
    Vehicles::HybridCar hybridCarMoved = std::move(hybridCar);

    // Afisare informatii dupa operatia de mutare
    std::cout << "Displaying Hybrid Car Information After Move Operation:" << std::endl;
    hybridCarMoved.DisplayInfo();

    return 0;
}


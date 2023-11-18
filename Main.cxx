#include "Cars/Car.h"
#include "Cars/ElectricCar.h"
#include "Cars/HybridCar.h"
#include <iostream>

int main() {
    // Exemplu cu mașină electrică în namespace-ul Vehicles
    std::cout << "======= Electric Car Example in Vehicles Namespace =======" << std::endl;

    // Creare obiect ElectricCar utilizând constructorul
    Vehicles::ElectricCar electricCar("Tesla", 2022, 80000.0, 75.0);

    // Apelarea metodei pentru a afișa informații despre mașină
    std::cout << "Displaying Electric Car Information:" << std::endl;
    electricCar.DisplayInfo();

    // Apelarea funcției virtuale pentru a calcula și afișa puterea mașinii
    std::cout << "Calculating and Displaying Electric Car Power using Virtual Function:" << std::endl;
    std::cout << "Power: " << electricCar.calculatePower() << " kW" << std::endl;

    // Apelarea funcției pur virtuale pentru a calcula și afișa puterea mașinii (interfața)
    std::cout << "Calculating and Displaying Electric Car Power using Interface Function:" << std::endl;
    std::cout << "Power: " << electricCar.calculatePowerInterface() << " kW" << std::endl;

    // Testarea operatorului de asignare
    std::cout << "Testing Copy Assignment Operator:" << std::endl;
    Vehicles::ElectricCar electricCarCopy = electricCar;
    electricCarCopy.DisplayInfo();

    // Linie nouă pentru a separa exemplele
    std::cout << std::endl;

    // Exemplu cu mașină hibridă în namespace-ul Vehicles
    std::cout << "======= Hybrid Car Example in Vehicles Namespace =======" << std::endl;

    // Creare obiect HybridCar utilizând constructorul
    Vehicles::HybridCar hybridCar("Toyota", 2022, 35000.0, 45.0);

    // Apelarea metodei pentru a afișa informații despre mașină
    std::cout << "Displaying Hybrid Car Information:" << std::endl;
    hybridCar.DisplayInfo();

    // Apelarea funcției virtuale pentru a calcula și afișa puterea mașinii
    std::cout << "Calculating and Displaying Hybrid Car Power using Virtual Function:" << std::endl;
    std::cout << "Power: " << hybridCar.calculatePower() << " kW" << std::endl;

    // Apelarea funcției pur virtuale pentru a calcula și afișa puterea mașinii (interfața)
    std::cout << "Calculating and Displaying Hybrid Car Power using Interface Function:" << std::endl;
    std::cout << "Power: " << hybridCar.calculatePowerInterface() << " kW" << std::endl;

    // Testarea operatorului de asignare move
    std::cout << "Testing Move Assignment Operator:" << std::endl;
    Vehicles::HybridCar hybridCarMoved = std::move(hybridCar);
    hybridCarMoved.DisplayInfo();

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include "ParkingLot.h"
#include <iostream>
#include <algorithm>


ParkingLot::ParkingLot(int capacity) : capacity(capacity) {}

ParkingLot::~ParkingLot() {
    std::lock_guard<std::mutex> lockGuard(mutex);
    parkedCars.clear();
}

void ParkingLot::addCar(std::shared_ptr<Car> car, bool handicap) {
    std::lock_guard<std::mutex> lockGuard(mutex);
    car->setHandicap(handicap);  // Marchăm mașina ca fiind pentru persoane cu handicap sau nu
    parkedCars.push_back(car);
}

void ParkingLot::enter(std::shared_ptr<Car> car) {
    std::lock_guard<std::mutex> lockGuard(mutex);

    if (parkedCars.size() < capacity) {
        std::cout << "Car with license plate " << car->getLicensePlate();
        if (car->isHandicap()) {
            std::cout << " (Handicap)";
        }
        std::cout << " entered the parking lot.\n";
        parkedCars.push_back(car);
    }
    else {
        std::cout << "Parking lot is full. Car with license plate " << car->getLicensePlate() << " cannot enter.\n";
    }
}


void ParkingLot::exit(std::shared_ptr<Car> car) {
    std::lock_guard<std::mutex> lockGuard(mutex);

    auto it = std::find(parkedCars.begin(), parkedCars.end(), car);
    if (it != parkedCars.end()) {
        std::cout << "Car with license plate " << car->getLicensePlate();
        if (car->isHandicap()) {
            std::cout << " (Handicap)";
        }
        std::cout << " exited the parking lot.\n";
        parkedCars.erase(it);
    }
    else {
        std::cout << "Car with license plate " << car->getLicensePlate() << " not found in the parking lot.\n";
    }
}

void ParkingLot::printParkingStatus() {
    std::lock_guard<std::mutex> lockGuard(mutex);
    std::cout << "Parking lot status: " << parkedCars.size() << " out of " << capacity << " spaces occupied.\n";
}




std::weak_ptr<Car> ParkingLot::getHandicapCarReference() {
    std::lock_guard<std::mutex> lockGuard(mutex);

    for (const auto& car : parkedCars) {
        if (car->isHandicap()) {
            // Returnăm un weak_ptr la prima masina pentru persoane cu handicap (daca exista)
            return car;
        }
    }

    // Returnăm un weak_ptr gol daca nu exista mașini pentru persoane cu handicap
    return std::weak_ptr<Car>();
}

//good code
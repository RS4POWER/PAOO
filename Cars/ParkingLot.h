#pragma once

#include <vector>
#include <memory>
#include <mutex>
#include "Car.h"

class ParkingLot {
public:
    explicit ParkingLot(int capacity);
    ~ParkingLot();

    void addCar(std::shared_ptr<Car> car, bool handicap = false);
    void enter(std::shared_ptr<Car> car);
    void exit(std::shared_ptr<Car> car);
    void printParkingStatus();
    std::weak_ptr<Car> getHandicapCarReference();  // Adăugată funcția pentru a obține un weak_ptr la mașina parcată pe un loc de parcare pentru persoane cu handicap

private:
    int capacity;
    std::vector<std::shared_ptr<Car>> parkedCars;
    std::mutex mutex;
};

//good code
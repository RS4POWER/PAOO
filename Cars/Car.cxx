#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include <iostream>

Car::Car(const std::string& licensePlate, bool handicap) : licensePlate(licensePlate), handicap(handicap) {}

std::string Car::getLicensePlate() const {
    return licensePlate;
}

bool Car::isHandicap() const {
    return handicap;
}


void Car::setHandicap(bool newHandicap) {
    handicap = newHandicap;
}

//good code

#ifndef CAR_H
#define CAR_H

#pragma once

#include <string>

class Car {
public:
    explicit Car(const std::string& licensePlate, bool handicap = false);
    std::string getLicensePlate() const;
    bool isHandicap() const;
    void setHandicap(bool handicap);  // Adăugare metoda setHandicap

private:
    std::string licensePlate;
    bool handicap;
};

//good code

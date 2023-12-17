#include <iostream>
#include <thread>
#include <vector>
#include <memory>
#include <mutex>

#include "Car.h"
#include "ParkingLot.h"

int main() {
    // Creăm o parcare cu o capacitate de 5 locuri
    ParkingLot parkingLot(5);

    // Creăm 4 mașini folosind smart pointers
    std::shared_ptr<Car> car1 = std::make_shared<Car>("AR34AEX", true);  
    std::shared_ptr<Car> car2 = std::make_shared<Car>("AR21AIR");
    std::shared_ptr<Car> car3 = std::make_shared<Car>("AR04INA", true);  
    std::shared_ptr<Car> car4 = std::make_shared<Car>("AR17ALX");

    // Adăugăm mașinile în parcare
    parkingLot.addCar(car1,true);
    parkingLot.addCar(car2);
    parkingLot.addCar(car3,true);
    parkingLot.addCar(car4);


    // Afisam starea initiala a parcarilor
    parkingLot.printParkingStatus();

    // Definim o functie care simuleaza intrarea si iesirea periodica a unei masini din parcare
    auto simulateCarEntryExit = [&parkingLot](std::shared_ptr<Car> car, int entryDelay, int exitDelay) {
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(entryDelay));
            parkingLot.enter(car);
            parkingLot.printParkingStatus();
            std::this_thread::sleep_for(std::chrono::seconds(exitDelay));
            parkingLot.exit(car);
            parkingLot.printParkingStatus();
        }
        };

    // Pornim fire de execuție pentru cele patru mașini
    std::thread threadCar1(simulateCarEntryExit, car1, 3, 5);
    std::thread threadCar2(simulateCarEntryExit, car2, 4, 6);
    std::thread threadCar3(simulateCarEntryExit, car3, 5, 7);
    std::thread threadCar4(simulateCarEntryExit, car4, 6, 8);

    // Așteptam pana când firele de execuție se termină
    threadCar1.join();
    threadCar2.join();
    threadCar3.join();
    threadCar4.join();

    return 0;
}

//good code
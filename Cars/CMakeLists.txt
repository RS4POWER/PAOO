add_library(Cars Car.cxx ElectricCar.cxx HybridCar.cxx PowerCalculator.cxx Car.h ElectricCar.h HybridCar.h PowerCalculator.h)

target_include_directories(Cars PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")


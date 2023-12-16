add_library(Cars Car.cxx ParkingLot.cxx Car.h ParkingLot.h)

target_include_directories(Cars PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

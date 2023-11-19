cmake_minimum_required(VERSION 3.10)

project(CarsApp VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Cars)

add_executable(CarsApp Main.cxx)

target_link_libraries(CarsApp PUBLIC Cars)

target_include_directories(CarsApp PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/Cars")


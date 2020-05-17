cmake_minimum_required(VERSION 3.15)
project(Tema3_POO)

set(CMAKE_CXX_STANDARD 14)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(Tema3_POO main.cpp farmacie.cpp farmacie.h farmacie_online.cpp farmacie_online.h GestionareFarmacii.cpp GestionareFarmacii.h)
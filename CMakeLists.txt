cmake_minimum_required(VERSION 3.16)
project(ee205_animal_farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_animal_farm main.cpp catDatabase.cpp catDatabase.h config.h deleteCats.cpp deleteCats.h main.h validateData.cpp validateData.h updateCats.cpp updateCats.h reportCats.cpp reportCats.h Cat.cpp Cat.h)
add_executable(ee205_animal_farm_test main2.cpp catDatabase.cpp catDatabase.h config.h deleteCats.cpp deleteCats.h main.h validateData.cpp validateData.h updateCats.cpp updateCats.h reportCats.cpp reportCats.h Cat.cpp Cat.h)

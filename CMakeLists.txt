cmake_minimum_required(VERSION 3.16)
project(ee205_animal_farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_animal_farm main.cpp config.h Cat.cpp Cat.h Node.cpp Node.h Weight.cpp Weight.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h Animal.cpp Animal.h Mammal.cpp Mammal.h)
add_executable(ee205_animal_farm_debug main2.cpp config.h Cat.cpp Cat.h Node.cpp Node.h Weight.cpp Weight.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h Animal.cpp Animal.h Mammal.cpp Mammal.h)

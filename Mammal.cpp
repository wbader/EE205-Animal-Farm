///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"
#include "config.h"

#include <iostream>
#include <cassert>

const std::string Mammal::MAMMAL_NAME = "Mammalian";

void Mammal::dump() const noexcept {
    Animal::dump();
    FORMAT_LINE_FOR_DUMP("Mammal", "color") << color << std::endl;
}

Color Mammal::getColor() const noexcept {
    return color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

Mammal::Mammal(const Weight::t_weight newMaxWeight, const std::string &newSpecies) : Animal(newMaxWeight, MAMMAL_NAME, newSpecies) {
    color = Color::UNKNOWN_COLOR;
}

Mammal::Mammal(const Color newColor, const Gender newGender, const Weight::t_weight newWeight,
               const Weight::t_weight newMaxWeight, const std::string &newSpecies) : Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies) {
    color = newColor;
}



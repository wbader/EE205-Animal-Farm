///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Animal.h"
#include "config.h"
#include "Weight.h"
#include <string>

class Mammal : public Animal {
public:
    static const std::string MAMMAL_NAME;
protected:
    Color color;

public:
    Mammal(const Weight::t_weight newMaxWeight, const std::string &newSpecies);
    Mammal(const Color newColor, const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newSpecies);
    Color getColor() const noexcept;
    void setColor(const Color newColor) noexcept;
    void dump() const noexcept override;
};
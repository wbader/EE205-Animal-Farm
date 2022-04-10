///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file validateData.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdbool.h>
#include <string>
#include "config.h"

extern bool checkCatNameForDuplicates(const char newName[]);
extern bool checkCatNameForValidLength(const char newName[]);

extern bool checkIndexForValidValue(const int index);

extern bool checkWeightForValidWeight(const Weight newWeight);

extern unsigned long long getNewLiscenseNumber();

extern std::string colorName(const enum Color color);
extern std::string breedName(const enum Breed breed);
extern std::string genderName(const enum Gender gender);

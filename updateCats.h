///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "config.h"

extern int updateCatName(const int index, const char newName[]);

extern int fixCat(const int index);

extern int updateCatWeight(const int index, const float newWeight);

extern int updateCollarColor1(const int index, const enum Color newColor);
extern int updateCollarColor2(const int index, const enum Color newColor);

extern int updateLiscense(const int index, const unsigned long long newLiscense);

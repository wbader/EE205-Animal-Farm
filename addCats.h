///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string.h>
#include <stdbool.h>

#include "config.h"

extern int addCat(const char catName[], const enum Gender catGender, const enum Breed catBreed, const bool catIsFixed, const float catWeight, const enum Color catCollar1, const enum Color catCollar2, const unsigned long long catLiscense);

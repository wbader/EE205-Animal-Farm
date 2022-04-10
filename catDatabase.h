///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Cat.h"

extern bool addCat(Cat* cat);
extern bool validateDatabase();
extern bool printAllCats();
extern void deleteAllCats();
extern Cat* findCatByName(const char* name);

extern Cat* catDatabaseHeadPointer;
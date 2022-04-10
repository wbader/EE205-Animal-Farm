///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Cat.h"

extern bool addCat(Cat* cat);
extern bool validateDatabase();
extern bool printAllCats();
extern void deleteAllCats();
extern Cat* findCatByName(const char* name);
extern bool deleteCat(const char* name);

extern Cat* catDatabaseHeadPointer;
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include "config.h"

void initializeDatabase()
{
    for(int i = 0; i < MAX_CATS; i++)
    {
        cats[i].name[0] = 0;
        cats[i].weight = 0.0;
    }

    totalCats = 0;

}

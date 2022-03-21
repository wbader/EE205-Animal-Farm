///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"

void deleteAllCats()
{
    totalCats = 0;
}

void deleteCat(const int index)
{
    if(index < 0 || index >= totalCats)
    {
        printf("deleteCat() - index out of bounds\n");
        return;
    }

    for(int i = index; i < totalCats - 1; i++)
    {
        strcpy(cats[i].name, cats[i+1].name);
        cats[i].gender       = cats[i+1].gender;
        cats[i].breed        = cats[i+1].breed;
        cats[i].isFixed      = cats[i+1].isFixed;
        cats[i].weight       = cats[i+1].weight;
        cats[i].collarColor1 = cats[i+1].collarColor1;
        cats[i].collarColor2 = cats[i+1].collarColor2;
        cats[i].liscense     = cats[i+1].liscense;
    }

    totalCats = totalCats - 1;
}
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

#include "addCats.h"
#include "catDatabase.h"
#include "config.h"
#include "validateData.h"

/*

int addCat(const char catName[], const enum Gender catGender, const enum Breed catBreed, const bool catIsFixed, const Weight catWeight, const enum Color catCollar1, const enum Color catCollar2, const unsigned long long catLiscense)
{
    if(checkCatNameForDuplicates(catName) == true)
    {
        fprintf(stderr, "%s: addCat() - Duplicate cat name entered\n", PROGRAM_NAME);
        return 1;
    }
    if(checkCatNameForValidLength(catName) == false)
    {
        fprintf(stderr, "%s: addCat() - catName length error\n", PROGRAM_NAME);
        return 1;
    }

    if(checkWeightForValidWeight(catWeight) == false)
    {
        fprintf(stderr, "%s: addCat() - catWeight too small\n", PROGRAM_NAME);
        return 1;
    }

    // need to add validation for collar colors and liscense

    strcpy(cats[totalCats].name, catName);
    cats[totalCats].gender       = catGender;
    cats[totalCats].breed        = catBreed;
    cats[totalCats].isFixed      = catIsFixed;
    cats[totalCats].weight       = catWeight;
    cats[totalCats].collarColor1 = catCollar1;
    cats[totalCats].collarColor2 = catCollar2;
    cats[totalCats].liscense     = catLiscense;

    totalCats++;

    return 0;
}

*/
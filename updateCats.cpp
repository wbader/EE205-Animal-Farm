///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "catDatabase.h"
#include "updateCats.h"
#include "reportCats.h"
#include "config.h"
#include "validateData.h"
/*
int updateCatName(const int index, const char newName[])
{
    if(checkCatNameForValidLength(newName) == false)
    {
        fprintf(stderr, "%s: updateCatName() - invalid newName [%s] length passed\n", PROGRAM_NAME, newName);
        return -1;
    }
    if(checkCatNameForDuplicates(newName) == true)
    {
        fprintf(stderr, "%s: updateCatName() - duplicate name entered [%s]\n", PROGRAM_NAME, newName);
        return -1;
    }
    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: updateCatName() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return -1;
    }

    strcpy(cats[index].name, newName);

    return 0;
}

int fixCat(const int index)
{
    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: fixCat() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return 1;
    }
    if(cats[index].isFixed == true)
    {
        fprintf(stderr, "%s: [%s] was already fixed!\n", PROGRAM_NAME, cats[index].name);
        return 1;
    }

    cats[index].isFixed = true;

    return 0;
}

int updateCatWeight(const int index, const Weight newWeight)
{
    if(checkWeightForValidWeight(newWeight) == false)
    {
        fprintf(stderr, "%s: updateCatWeight() - newWeight [%f] <= 0\n", PROGRAM_NAME, newWeight);
        return 1;
    }

    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: updateCatWeight() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return 1;
    }

    cats[index].weight = newWeight;

    return 0;
}

int updateCollarColor1(const int index, const enum Color newColor)
{
    // @todo: validate color

    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: updateCollarColor1() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return 1;
    }

    cats[index].collarColor1 = newColor;

    return 0;
}

int updateCollarColor2(const int index, const enum Color newColor)
{
    // @todo: validate color

    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: updateCollarColor2() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return 1;
    }

    cats[index].collarColor2 = newColor;

    return 0;
}

int updateLiscense(const int index, const unsigned long long newLiscense)
{
    // @todo: validate liscense

    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: updateCatWeight() - index [%d] out of bounds\n", PROGRAM_NAME, index);
        return 1;
    }

    cats[index].liscense = newLiscense;

    return 0;
}

*/

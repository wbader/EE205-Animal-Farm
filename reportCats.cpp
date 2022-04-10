///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

#include "reportCats.h"
#include "catDatabase.h"
#include "config.h"
#include "validateData.h"
/*
void printCat(const int index)
{
    if(checkIndexForValidValue(index) == false)
    {
        fprintf(stderr, "%s: printCat() Bad cat index [%d]", PROGRAM_NAME, index);
        return;
    }

    printf("cat index = [%d]  name = [%s] gender = [%s] breed = [%s] isFixed = [%d] weight = [%f] Color1 = [%s] Color2 = [%s] Liscense = [%llu]\n",
           index,
           cats[index].name,
           genderName(cats[index].gender),
           breedName(cats[index].breed),
           cats[index].isFixed,
           cats[index].weight,
           colorName(cats[index].collarColor1),
           colorName(cats[index].collarColor2),
           cats[index].liscense);

    return;
}

void printAllCats()
{
    for(int i = 0; i < totalCats; i++)
    {
        printCat(i);
    }
    return;
}

int findCat(const char catName[])
{
    for(int i = 0; i < totalCats; i++)
    {
        if(strcmp(catName, cats[i].name) == 0)
        {
            return i;
        }
    }
    return -1;
}
 */

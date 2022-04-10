///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file validateData.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>

#include "validateData.h"
#include "reportCats.h"
#include "catDatabase.h"
#include "config.h"

/*
unsigned long long getNewLiscenseNumber()
{
    static unsigned long long latestLiscense = 100;

    return latestLiscense++;
}

std::string colorName(const enum Color color)
{
    //BLACK, WHITE, GREY, PINK, RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE

    switch(color)
    {
        case BLACK:
            return "Black";
            break;
        case WHITE:
            return "White";
            break;
        case GREY:
            return "Grey";
            break;
        case PINK:
            return "Pink";
            break;
        case RED:
            return "Red";
            break;
        case ORANGE:
            return "Orange";
            break;
        case YELLOW:
            return "Yellow";
            break;
        case GREEN:
            return "Green";
            break;
        case BLUE:
            return "Blue";
            break;
        case PURPLE:
            return "Purple";
            break;
        default:
            fprintf(stderr, "%s: Bad color passed to colorName()\n", PROGRAM_NAME);
            return "ERROR!";
    }
    fprintf(stderr, "%s: passed through switch in colorName()\n", PROGRAM_NAME);
    return "ERROR!";
}
*/

std::string breedName(const enum Breed breed)
{
    // UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX
    switch(breed)
    {
        case UNKNOWN_BREED:
            return "Unknown Breed";
        case MAINE_COON:
            return "Maine Coon";
        case MANX:
            return "Manx";
        case SHORTHAIR:
            return "Shorthair";
        case PERSIAN:
            return "Persian";
        case SPHYNX:
            return "Sphynx";
        default:
            fprintf(stderr, "%s: Bad breed name passed to breedName()\n", PROGRAM_NAME);
            return "ERROR!";
    }
    fprintf(stderr, "%s: passed through switch in breedName()\n", PROGRAM_NAME);
    return "ERROR!";
}

std::string genderName(const enum Gender gender)
{
    // UNKNOWN_GENDER, MALE, FEMALE
    switch(gender)
    {
        case UNKNOWN_GENDER:
            return "Unknown Gender";
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            fprintf(stderr, "%s: Bad breed name passed to breedName()\n", PROGRAM_NAME);
            return "ERROR!";
    }
    fprintf(stderr, "%s: passed through switch in genderName()\n", PROGRAM_NAME);
    return "ERROR!";
}

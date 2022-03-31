///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdbool.h>
#include <stddef.h>

#define MAX_CAT_NAME_LENGTH (50)
#define MAX_CATS (1024)
#define PROGRAM_NAME "Animal Farm 1"

// typedefs
typedef float Weight;

// enums
enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed  {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color  {BLACK, WHITE, GREY, PINK, RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};

// structs
struct Cat {
    char               name[MAX_CAT_NAME_LENGTH];
    enum Gender        gender;
    enum Breed         breed;
    bool               isFixed;
    Weight             weight;
    enum Color         collarColor1;
    enum Color         collarColor2;
    unsigned long long liscense;
};

// Global Variables
extern struct Cat cats[MAX_CATS];
extern int        totalCats;


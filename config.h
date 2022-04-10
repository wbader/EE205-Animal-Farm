///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Animal_Farm - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdbool.h>
#include <stddef.h>

#define MAX_CAT_NAME_LENGTH (50)
#define MAX_CATS (1024)
#define PROGRAM_NAME "Animal Farm 2"
#define UNKNOWN_WEIGHT (-1)

// typedefs
typedef float Weight;
typedef int   NumCats;

// enums
enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed  {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color  {UNKNOWN_COLOR, BLACK, WHITE, GREY, PINK, RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};

// structs
struct CatStruct {
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
extern struct CatStruct cats[MAX_CATS];
extern NumCats    totalCats;


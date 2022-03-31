///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file CatStruct.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include <cstring>

Cat::Cat(char *newName,
         Gender newGender,
         Breed newBreed,
         bool newIsCatFixed,
         Weight newWeight,
         Color newCollarColor1,
         Color newCollarColor2,
         unsigned long long int newLiscense) {

    strcpy(name, newName);
    gender       = newGender;
    breed        = newBreed;
    isCatFixed   = newIsCatFixed;
    weight       = newWeight;
    collarColor1 = newCollarColor1;
    collarColor2 = newCollarColor2;
    liscense     = newLiscense;
    next         = NULL;
}

Cat::Cat() {
    strcpy(name, "");
    gender       = UNKNOWN_GENDER;
    breed        = UNKNOWN_BREED;
    isCatFixed   = false;
    weight       = UNKNOWN_WEIGHT;
    collarColor1 = UNKNOWN_COLOR;
    collarColor2 = UNKNOWN_COLOR;
    liscense     = 0;
}

Cat::~Cat() {
    memset(name, 0, sizeof(name));
    gender       = static_cast<Gender>(0);
    breed        = static_cast<Breed>(0);
    isCatFixed   = 0;
    weight       = 0;
    collarColor1 = static_cast<Color>(0);
    collarColor2 = static_cast<Color>(0);
    liscense     = 0;
}

void Cat::print() {

}

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
#include <iostream>
#include <iomanip>

using namespace std;
/*

Cat::Cat(char *newName,
         Gender newGender,
         Breed newBreed,
         bool newIsCatFixed,
         Weight newWeight,
         Color newCollarColor1,
         Color newCollarColor2,
         unsigned long long int newLiscense) {

    Cat();
    strcpy(name, newName);
    gender = newGender;
    breed = newBreed;
    isCatFixed = newIsCatFixed;
    weight = newWeight;
    collarColor1 = newCollarColor1;
    collarColor2 = newCollarColor2;
    liscense = newLiscense;
}

Cat::Cat() {
    strcpy(name, "");
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    collarColor1 = UNKNOWN_COLOR;
    collarColor2 = UNKNOWN_COLOR;
    liscense = 0;
    next = NULL;
}

Cat::~Cat() {
    memset(name, 0, sizeof(name));
    gender = static_cast<Gender>(0);
    breed = static_cast<Breed>(0);
    isCatFixed = 0;
    weight = 0;
    collarColor1 = static_cast<Color>(0);
    collarColor2 = static_cast<Color>(0);
    liscense = 0;
}

// @todo fix validate(), currently just returns true to make the code work
bool Cat::validate() {
    return true;
}

const char *Cat::getName() const {
    return name;
}

Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
}

bool Cat::isCatFixed1() const {
    return isCatFixed;
}

Weight Cat::getWeight() const {
    return weight;
}

Color Cat::getCollarColor1() const {
    return collarColor1;
}

Color Cat::getCollarColor2() const {
    return collarColor2;
}

unsigned long long int Cat::getLiscense() const {
    return liscense;
}


/// Format a line for printing the members of a class
#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

/// @returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() const noexcept {
    assert(validate());
    cout << setw(80) << setfill('=') << "" << endl;
    cout << setfill(' ');
    cout << left;
    cout << boolalpha;
    FORMAT_LINE("Cat", "name") << getName() << endl;
    FORMAT_LINE("Cat", "gender") << genderName(getGender()) << endl;
    FORMAT_LINE("Cat", "breed") << breedName(getBreed()) << endl;
    FORMAT_LINE("Cat", "isFixed") << isFixed() << endl;
    FORMAT_LINE("Cat", "weight") << getWeight() << endl;
    return true;
}

*/
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include "validateData.h"

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

Cat::Cat(const char *newName,
         Gender newGender,
         Breed newBreed,
         bool newIsCatFixed,
         Weight newWeight) {
    Cat(newName, newGender, newBreed, newWeight);
    Cat::isCatFixed = newIsCatFixed;
    if(!(validate()))
    {
        cerr << "Cat::Cat(name, gender, breed, isFixed, weight) failed validation" << endl;
    }
}

Cat::Cat(const char *newName,
         Gender newGender,
         Breed newBreed,
         Weight newWeight) {

    Cat();
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
    if(!(validate()))
    {
        cerr << "Cat::Cat(name, gender, breed, weight) failed validation" << endl;
    }
}

Cat::Cat() {
    strcpy(name, "");
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

Cat::~Cat() {
    //cout << "Cat [" << name << "] deconstructing" << endl;
    memset(name, 0, sizeof(name));
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

//
bool Cat::validate() const {

    if (name == nullptr)
    {
        cerr << PROGRAM_NAME << " validate() failed due to name = nullptr" << endl;
        return false;
    }

    if (strlen(name) == 0 || strlen(name) > MAX_CAT_NAME_LENGTH)
    {
        cerr << PROGRAM_NAME << " validate() failed due to invalid cat name length" << endl;
        return false;
    }

    if (weight <= 0)
    {
        cerr << PROGRAM_NAME << " validate() failed due to invalid weight" << endl;
        return false;
    }

    if (gender == UNKNOWN_GENDER)
    {
        cerr << PROGRAM_NAME << " validate() failed due to invalid gender" << endl;
        return false;
    }

    if (breed == UNKNOWN_BREED)
    {
        cerr << PROGRAM_NAME << " validate() failed due to invalid breed" << endl;
        return false;
    }

    return true;
}

const char* Cat::getName() const {
    return name;
}

Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
}

bool Cat::isFixed() const {
    return isCatFixed;
}

Weight Cat::getWeight() const {
    return weight;
}

/// Format a line for printing the members of a class
#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

/// @returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() const noexcept {
    assert(Cat::validate());
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

void Cat::setName(const char *name) {
    if(name == nullptr)
    {
        cout << "Cat::setName() - name can't be nullptr" << endl;
        return;
    }
    if(strlen(name) < 1 || strlen(name) > MAX_CAT_NAME_LENGTH)
    {
        cout << "Cat::setName() - invalid length, [" << strlen(name) << "] is not between 1 and " << MAX_CAT_NAME_LENGTH <<endl;
        return;
    }
    strcpy(Cat::name, name);
}

void Cat::fixCat() {
    if(!(isFixed()))
        isCatFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    if(newWeight <= 0)
    {
        cout << "Cat::setWeight(weight) - invalid weight, [" << newWeight << "] must be greater than 0" << endl;
        return;
    }
    weight = newWeight;
}

void Cat::setGender(Gender newGender) {
    if (Cat::getGender() != UNKNOWN_GENDER)
    {
        cerr << "Cat::setGender() - can't change from a known gender" << endl;
        return;
    }
    gender = newGender;
}

void Cat::setBreed(Breed newBreed)
{
    if(Cat::getBreed() != UNKNOWN_BREED)
    {
        cerr << "Cat::setBreed() - can't change from a known breed" << endl;
        return;
    }
    breed = newBreed;
}

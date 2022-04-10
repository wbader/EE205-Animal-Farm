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

    Cat();
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    Cat::isCatFixed = newIsCatFixed;
    setWeight(newWeight);
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
    next = NULL;
}

Cat::~Cat() {
    memset(name, 0, sizeof(name));
    gender = static_cast<Gender>(0);
    breed = static_cast<Breed>(0);
    isCatFixed = 0;
    weight = 0;
}

//
bool Cat::validate() const {

    if (Cat::name == nullptr)
        return false;
    if (strlen(Cat::name) == 0 || strlen(Cat::name) > MAX_CAT_NAME_LENGTH)
        return false;
    if (Cat::weight <= 0)
        return false;
    if (Cat::gender == UNKNOWN_GENDER)
        return false;
    if (Cat::breed == UNKNOWN_BREED)
        return false;

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
        Cat::isCatFixed = true;
}

void Cat::setWeight(Weight weight) {
    if(weight <= 0)
    {
        cout << "Cat::setWeight(weight) - invalid weight, [" << weight << "] must be greater than 0" << endl;
        return;
    }
    Cat::weight = weight;
}

void Cat::setGender(Gender newGender) {
    if (Cat::getGender() != UNKNOWN_GENDER)
    {
        cerr << "Cat::setGender() - can't change from a known gender" << endl;
        return;
    }
    Cat::gender = newGender;
}

void Cat::setBreed(Breed newBreed)
{
    if(Cat::getBreed() != UNKNOWN_BREED)
    {
        cerr << "Cat::setBreed() - can't change from a known breed" << endl;
    return;
    }
    Cat::breed = newBreed;
}

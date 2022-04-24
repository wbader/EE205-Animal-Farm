///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include "config.h"

#include <string>
#include <iostream>
#include <cassert>

using namespace std;

const std::string Cat::SPECIES_NAME = "Felis Catus";

std::string Cat::getName() const noexcept{
    return name;
}

bool Cat::isFixed() const noexcept{
    return isCatFixed;
}

void Cat::setName(const string &newName) {
    if (newName.empty())
        throw invalid_argument(PROGRAM_NAME " Cat::setName(string): string can't be empty");

    name = newName;
}

bool Cat::validate() const noexcept {
    if(!Animal::validate())
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to Animal::validate()" << endl;
        return false;
    }

    if (name.empty())
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to name empty" << endl;
        return false;
    }

    return true;
}

void Cat::fixCat() noexcept{
    if(!(isFixed()))
        isCatFixed = true;
}

std::string Cat::speak() const noexcept {
    return "Meow";
}

void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP("Cat", "name") << name << std::endl;
    FORMAT_LINE_FOR_DUMP("Cat", "isFixed") << isFixed() << std::endl;
}

Cat::Cat(const string &newName) : Mammal (MAX_WEIGHT, SPECIES_NAME) {
    setName(newName);
    isCatFixed = false;
}

Cat::Cat(const string &newName, const Color newColor, const bool newIsFixed, const Gender newGender,
         const Weight::t_weight newWeight) : Mammal(newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME)  {

    setName(newName);
    isCatFixed = newIsFixed;

    assert(validate());
}

/*
Cat::Cat(const string& newName,
         Gender newGender,
         Breed newBreed,
         bool newIsCatFixed,
         Weight::t_weight newWeight) : Cat(newName, newGender, newBreed, newWeight) {

    Cat::isCatFixed = newIsCatFixed;
    if(!(validate()))
    {
        cerr << "Cat::Cat(name, gender, breed, isFixed, weight) failed validation" << endl;
    }
}

Cat::Cat(const string& newName,
         Gender newGender,
         Breed newBreed,
         Weight::t_weight newWeight) : Cat() {

    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    weight = Weight(Weight::POUND, newWeight,MAX_WEIGHT);
    if(!(validate()))
    {
        cerr << "Cat::Cat(name, gender, breed, weight) failed validation" << endl;
    }
}

Cat::Cat() {
    name = "";
    gender = Gender::UNKNOWN_GENDER;
    breed = Breed::UNKNOWN_BREED;
    isCatFixed = false;
    weight = Weight(Weight::POUND, MAX_WEIGHT);
    next = nullptr;
}

Cat::~Cat() {
    /// cout << "Cat [" << name << "] deconstructing" << endl;
    name.clear();
    gender = Gender::UNKNOWN_GENDER;
    breed = Breed::UNKNOWN_BREED;
    isCatFixed = false;
    next = nullptr;
}

bool Cat::validate() const {

    if (name.empty())
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to name = nullptr" << endl;
        return false;
    }

    if (!weight.validate())
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to invalid weight" << endl;
        return false;
    }

    if (gender == Gender::UNKNOWN_GENDER)
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to invalid gender" << endl;
        return false;
    }

    if (breed == Breed::UNKNOWN_BREED)
    {
        cerr << PROGRAM_NAME << " Cat::validate() failed due to invalid breed" << endl;
        return false;
    }

    return true;
}



Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
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
    FORMAT_LINE("Cat", "gender") << getGender() << endl;
    FORMAT_LINE("Cat", "breed") << getBreed() << endl;
    FORMAT_LINE("Cat", "isFixed") << isFixed() << endl;
    FORMAT_LINE("Cat", "weight") << getWeight() << endl;
    return true;
}



void Cat::setWeight(float newWeight) {
    try {
        weight.setWeight(newWeight);
    } catch (std::exception const& e) {
        throw std::invalid_argument(e.what());
    }
}

void Cat::setGender(Gender newGender) {
    if (Cat::getGender() != Gender::UNKNOWN_GENDER)
        throw invalid_argument(PROGRAM_NAME " Cat::setGender() - can't change from a known gender");

    gender = newGender;
}

void Cat::setBreed(Breed newBreed)
{
    if (Cat::getBreed() != Breed::UNKNOWN_BREED)
        throw invalid_argument(PROGRAM_NAME " Cat::setBreed() - can't change from a known breed");

    breed = newBreed;
}

*/
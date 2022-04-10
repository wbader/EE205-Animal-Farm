///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Animal_Farm - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"

class Cat {
public:
    Cat*                       next;
    Cat();
    Cat(char*                  name,
        Gender                 newGender,
        Breed                  newBreed,
        bool                   newIsCatFixed,
        Weight                 newWeight,
        Color                  newCollarColor1,
        Color                  collarColor2,
        unsigned long long int liscense);
    ~Cat();

    bool print() const noexcept;
    bool validate() const;
private:
    char               name[MAX_CAT_NAME_LENGTH];
public:
    const char *getName() const;

    Gender getGender() const;

    Breed getBreed() const;

    bool isFixed() const;

    Weight getWeight() const;

    Color getCollarColor1() const;

    Color getCollarColor2() const;

    unsigned long long int getLiscense() const;

private:
    enum Gender        gender = UNKNOWN_GENDER;
    enum Breed         breed = UNKNOWN_BREED;
    bool               isCatFixed = false;
    Weight             weight = UNKNOWN_WEIGHT;
    enum Color         collarColor1;
    enum Color         collarColor2;
    unsigned long long liscense;

};


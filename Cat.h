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
    Cat* next;

    Cat();
    Cat(const char* newName,
        Gender      newGender,
        Breed       newBreed,
        bool        newIsCatFixed,
        Weight      newWeight);
    Cat(const char* newName,
        Gender      newGender,
        Breed       newBreed,
        Weight      newWeight);
    ~Cat();

    bool print() const noexcept;

    bool validate() const;

    //Getters
    const char* getName() const;
    Gender      getGender() const;
    Breed       getBreed() const;
    bool        isFixed() const;
    Weight      getWeight() const;

    //Setters
    void setName(const char *name);
    void fixCat();
    void setWeight(Weight newWeight);

protected:
public:
    void setGender(Gender newGender);
    void setBreed(Breed newBreed);

private:
    char        name[MAX_CAT_NAME_LENGTH];
    enum Gender gender;
    enum Breed  breed;
    bool        isCatFixed;
    Weight      weight;

};

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
#include "Weight.h"

#include <string>

class Cat {
public:
    Cat* next = nullptr;

    constexpr static const Weight::t_weight MAX_WEIGHT = 40.0;

    Cat();
    Cat(std::string      newName,
        Gender           newGender,
        Breed            newBreed,
        bool             newIsCatFixed,
        Weight::t_weight newWeight);
    Cat(std::string      newName,
        Gender           newGender,
        Breed            newBreed,
        Weight::t_weight newWeight);
    ~Cat();

    bool print() const noexcept;

    bool validate() const;

    //Getters
    std::string getName() const;
    Gender      getGender() const;
    Breed       getBreed() const;
    bool        isFixed() const;
    Weight      getWeight() const;

    //Setters
    void setName(const std::string &newName);
    void fixCat();
    void setWeight(Weight::t_weight newWeight);
    void setGender(Gender newGender);
    void setBreed(Breed newBreed);

private:
    std::string name;
    enum Gender gender;
    enum Breed  breed;
    bool        isCatFixed;
    Weight      weight;

};

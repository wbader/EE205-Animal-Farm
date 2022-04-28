///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Animal_Farm - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "config.h"
#include "Weight.h"
#include "Mammal.h"

#include <string>

class Cat : public Mammal {
protected:
    std::string name;
    bool        isCatFixed;
public:
    static const std::string SPECIES_NAME;
    constexpr static const Weight::t_weight MAX_WEIGHT = 40.0;

    explicit Cat(const std::string &newName);
    Cat(const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::t_weight newWeight);

    std::string getName() const noexcept;
    void setName(const std::string &newName);
    bool isFixed() const noexcept;
    void fixCat() noexcept;
    std::string speak() const noexcept override;
    void dump() const noexcept override;
    bool validate() const noexcept override;

};

    /*
    Cat();
    Cat(const std::string&      newName,
        Gender           newGender,
        Breed            newBreed,
        bool             newIsCatFixed,
        Weight::t_weight newWeight);
    Cat(const std::string&      newName,
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

    */



///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Weight.h"
#include "Node.h"
#include <string>

class Animal : public Node {
public:
    static const std::string KINGDOM_NAME;
private:
    std::string species;
    std::string classification;
    Gender      gender;
    Weight      weight;

public:
    Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
           const std::string &newSpecies);
    Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
           const std::string &newClassification, const std::string &newSpecies);

    static const std::string &getKingdom() noexcept;
    const std::string &getClassification() const noexcept;
    const std::string &getSpecies() const noexcept;
    Gender getGender() const noexcept;

    Weight::t_weight getWeight() const noexcept;
    void setWeight(const Weight::t_weight newWeight);

    virtual std::string speak() const noexcept = 0;
    void dump() const noexcept override;
    bool validate() const noexcept override;

protected:
    void setGender(const Gender newGender);

};



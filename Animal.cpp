///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include "Weight.h"
#include "config.h"
#include <string>
#include <iostream>
#include <cassert>

Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) {
    if(newClassification.empty())
        throw std::invalid_argument(PROGRAM_NAME " Animal::Animal(t_weight, string, string) newClassification was empty");

    if(newSpecies.empty())
        throw std::invalid_argument(PROGRAM_NAME " Animal::Animal(t_weight, string, string) newSpecies was empty");

    weight         = Weight(Weight::POUND, newMaxWeight);
    species        = newSpecies;
    classification = newClassification;

    /// minimum always fails validate()
    // assert(validate())
}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) : Animal(newMaxWeight, newClassification, newSpecies) {
    setGender(newGender);
    setWeight(newWeight);

    assert(validate());
}

Weight::t_weight Animal::getWeight() const noexcept{
    return weight.getWeight();
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    Animal::weight.setWeight(newWeight);
}

const std::string &Animal::getSpecies() const noexcept {
    return species;
}

const std::string &Animal::getClassification() const noexcept {
    return classification;
}

const std::string &Animal::getKingdom() const noexcept{
    return KINGDOM_NAME;
}

void Animal::dump() const noexcept {
    Node::dump();
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "kingdom") << getKingdom() << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "classification") << getClassification() << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "species") << getSpecies() << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "gender") << getGender() << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal:", "weight") << weight << std::endl;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

bool Animal::validate() const noexcept {

    if(!Node::validate()) {
        std::cerr << PROGRAM_NAME << " Animal::validate() failed because Node::validate()" << std::endl;
        return false;
    }
    if(classification.empty()){
        std::cerr << PROGRAM_NAME << " Animal::validate() failed because classification not set" << std::endl;
        return false;
    }

    if(species.empty()){
        std::cerr << PROGRAM_NAME << " Animal::validate() failed because species not set" << std::endl;
        return false;
    }

    if(!weight.validate()){
        std::cerr << PROGRAM_NAME << " Animal::validate() failed because Weight::validate()" << std::endl;
        return false;
    }

    if(gender == Gender::UNKNOWN_GENDER){
        std::cerr << PROGRAM_NAME << " Animal::validate() failed because Gender not set" << std::endl;
        return false;
    }
}

void Animal::setGender(const Gender newGender) {
    if (Animal::getGender() != Gender::UNKNOWN_GENDER)
        throw std::invalid_argument(PROGRAM_NAME " Cat::setGender() - can't change from a known gender");

    gender = newGender;
}

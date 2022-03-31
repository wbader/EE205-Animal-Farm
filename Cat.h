///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file CatStruct.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
#define EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H

#include "config.h"

class Cat {
public:
    Cat*               next;
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

    void print();
    bool validate();
private:
    char               name[MAX_CAT_NAME_LENGTH];
    enum Gender        gender = UNKNOWN_GENDER;
    enum Breed         breed = UNKNOWN_BREED;
    bool               isCatFixed = false;
    Weight             weight = UNKNOWN_WEIGHT;
    enum Color         collarColor1;
    enum Color         collarColor2;
    unsigned long long liscense;
};



#endif //EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H

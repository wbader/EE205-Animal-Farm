///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file main2.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

/// This is just a test bed for the Cat class, not production code

#include "Cat.h"
#include "config.h"
#include "catDatabase.h"

#include <iostream>
#include <cstring>

using namespace std;

Cat* catDatabaseHeadPointer = nullptr;

int main()
{
    cout << "DEBUG - Starting " << PROGRAM_NAME << endl;

    Cat* tempCat = new Cat();
    if(strcmp(tempCat->getName(), "" ) == 0)
        cout << "Default name set correctly" << endl;
    else
        cout << "FAILURE! - Default name set incorrectly [" << tempCat->getName() << "]" << endl;
    if(tempCat->getGender() == UNKNOWN_GENDER)
        cout << "Default gender set correctly" << endl;
    else
        cout << "FAILURE! - Default gender set incorrectly" << endl;
    if(tempCat->getBreed() == UNKNOWN_BREED)
        cout << "Default breed set correctly" << endl;
    else
        cout << "FAILURE! - Default breed set incorrectly" << endl;
    if(tempCat->isFixed() == false)
        cout << "Default fix set correctly" << endl;
    else
        cout << "FAILURE! - Default fix set incorrectly" << endl;
    if(tempCat->getWeight() == UNKNOWN_WEIGHT)
        cout << "Default weight set correctly" << endl;
    else
        cout << "FAILURE! - Default weight set incorrectly" << endl;
    if(tempCat->validate())
        cout << "FAILURE! - Default Cat passed validate()" << endl;
    else
        cout << "Default Cat() does not pass validate()" << endl;

    cout << endl;

    tempCat->setName(nullptr);
    tempCat->setName("");
    tempCat->setName("a");
    if(strcmp(tempCat->getName(), "a") == 0)
        cout << "Name set to 1 char correctly" << endl;
    else
        cout << "FAILURE! - Name set to 1 char incorrectly" << endl;
    tempCat->setName("1234567890123456789012345678901234567890123456789");
    if(strcmp(tempCat->getName(), "1234567890123456789012345678901234567890123456789") == 0)
        cout << "Name set to [" << (MAX_CAT_NAME_LENGTH - 1)  << "] chars correctly" << endl;
    else
        cout << "FAILURE! - Name set to [" << (MAX_CAT_NAME_LENGTH - 1)  << "] chars incorrectly" << endl;
    tempCat->setName("123456789012345678901234567890123456789012345678901");
    tempCat->setGender(FEMALE);
    if(tempCat->getGender() == FEMALE)
        cout << "Gender set correctly" << endl;
    else
        cout << "FAILURE! - Gender set incorrectly" << endl;
    tempCat->setGender(MALE);
    tempCat->setBreed(MAINE_COON);
    if(tempCat->getBreed() == MAINE_COON)
        cout << "Breed set correctly" << endl;
    else
        cout << "FAILURE! - Breed set incorrectly" << endl;
    tempCat->setBreed(SHORTHAIR);
    if(tempCat->isFixed() == false)
        cout << "isFixed set correctly in default" << endl;
    else
        cout << "FAILURE! - isFixed set incorrectly in default" << endl;
    tempCat->fixCat();
    if(tempCat->isFixed() == true)
        cout << "fixCat() sets correctly" << endl;
    else
        cout << "FAILURE! - setCat() set incorrectly" << endl;
    tempCat->setWeight(0.0);
    tempCat->setWeight((1.0/1024.0));
    tempCat->print();
    if(tempCat->validate())
        cout << "We've created a valid cat!" << endl;

    Cat *tempCat1 = new Cat("Loki", MALE, PERSIAN, 1.0);
    addCat(tempCat1);
    addCat(tempCat);
    printAllCats();
    delete tempCat;
    delete tempCat1;
/*
    Cat *tempCat2= new Cat("Milo", UNKNOWN_GENDER, MANX, 1.1);
    delete tempCat2;
    Cat *tempCat3 = new Cat("Bella", FEMALE, UNKNOWN_BREED, 1.2);
    delete tempCat3;
    Cat *tempCat4 = new Cat("Kali", FEMALE, SHORTHAIR, UNKNOWN_WEIGHT);
    delete tempCat4;
*/

    cout << endl;

    cout << "DEBUG - Done with " << PROGRAM_NAME << endl;
}
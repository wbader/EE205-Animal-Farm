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

Cat* catDatabaseHeadPointer;

int main()
{
    cout << "Main2 - Starting " << PROGRAM_NAME << endl;

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
        cout << "Default Cat() does not pass validate()" << endl << endl;

    tempCat->setName(nullptr);
    tempCat->setName("");
    tempCat->setName("a");
    if(strcmp(tempCat->getName(), "a") == 0)
        cout << "Name set to 1 char correctly" << endl;
    else
        cout << "FAILURE! - Name set to 1 char incorrectly" << endl;

    cout << "Main2 - Done with " << PROGRAM_NAME << endl;
}
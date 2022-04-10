///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

#include "catDatabase.h"
#include "config.h"
#include "Cat.h"

using namespace std;

bool addCat(Cat* cat)
{
    if(!(cat->validate()))
    {
        cerr << PROGRAM_NAME << " addCat(): passed cat didn't validate" << endl;
        return false;
    }
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " addCat(): validateDatabase() failed prior to adding cat" << endl;
        return false;
    }
    Cat* temp = catDatabaseHeadPointer;
    catDatabaseHeadPointer = cat;
    cat->next = temp;
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " addCat(): validateDatabase() failed after to adding cat" << endl;
        return false;
    }
    return true;
}

bool validateDatabase()
{
    Cat* temp = catDatabaseHeadPointer;
    while (temp != nullptr)
    {
        if(!(temp->validate()))
        {
            cerr << PROGRAM_NAME << " validateDatabase(): error validating cat in database" << endl;
            return false;
        }
        temp = temp->next;
    }
    return true;
}

bool printAllCats()
{
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " printAllCats(): validateDatabase() failed" << endl;
        return false;
    }
    Cat* temp = catDatabaseHeadPointer;
    while (temp != nullptr)
    {
        temp->print();
        temp = temp->next;
    }
    return true;
}

void deleteAllCats()
{
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " deleteAllCats(): validateDatabase() failed prior to deletion" << endl;
        return;
    }
    Cat* temp = catDatabaseHeadPointer;
    Cat* nextTemp;
    while (temp != nullptr)
    {
        nextTemp = temp->next;
        delete temp;
        temp = nextTemp;
    }
    catDatabaseHeadPointer = nullptr;
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " deleteAllCats(): validateDatabase() failed after deletion" << endl;
        return;
    }
}

Cat* findCatByName(const char* name)
{
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " findCatByName(): validateDatabase() failed" << endl;
        return nullptr;
    }
    Cat* temp = catDatabaseHeadPointer;
    while (temp != nullptr)
    {
        if(strcmp(temp->getName(), name) == 0)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

bool deleteCat(const char* name)
{
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " deleteCat(): validateDatabase() failed prior to deletion" << endl;
        return false;
    }
    Cat* temp = catDatabaseHeadPointer;
    Cat* prev = catDatabaseHeadPointer;
    while(temp != nullptr)
    {
        if(strcmp(temp->getName(), name) == 0)
        {
            Cat* next = temp->next;
            if(temp == catDatabaseHeadPointer)
                catDatabaseHeadPointer = next;
            else
                prev->next = next;
            delete temp;
            return true;
        }
        prev = temp;
        temp = temp->next;
    }
    if(!(validateDatabase()))
    {
        cerr << PROGRAM_NAME << " deleteCat(): validateDatabase() failed after deletion" << endl;
        return false;
    }
    return false;
}
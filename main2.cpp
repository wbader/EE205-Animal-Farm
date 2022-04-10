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
#include <iostream>

using namespace std;

Cat* headCat;

int main()
{
    cout << "Main2 - Starting " << PROGRAM_NAME << endl;

    Cat* recruit = new Cat("Recruit", MALE, SHORTHAIR, true, 10.0);
    recruit->print();
    delete recruit;
    cout << "Main2 - Done with " << PROGRAM_NAME << endl;
}
///////////////////////////////////////////////////////////////////////////////
//           University of Hawaii, College of Engineering
/// @brief   Lab08d - Animal Farm 1 To - EE 205 - Spr 2022
///
/// @file    main.c
/// @version 1.0 - Initial version
///
/// This is Animal Farm 1, we're creating a database of cats
/// using enums and arrays.  This program will be adapted further
/// to Animal Farm 4, 5 or beyond!
///
/// Compile: $ make
///
/// Usage:   $ ./animalfarm
///
/// @author  Waylon Bader <wbader@hawaii.edu>
/// @date    20 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "catDatabase.h"
#include "config.h"
#include "validateData.h"

using namespace std;

Cat* catDatabaseHeadPointer = nullptr;

int main()
{

    cout << "Starting " << PROGRAM_NAME << endl;
    Cat *tempCat0 = new Cat("Loki", MALE, PERSIAN, 1.0);
    if(tempCat0->validate())
        addCat(tempCat0);
    Cat *tempCat1 = new Cat("Milo", MALE, MANX, 1.1);
    if(tempCat1->validate())
        addCat(tempCat1);
    Cat *tempCat2 = new Cat("Bella", FEMALE, MAINE_COON, 1.2);
    if(tempCat2->validate())
        addCat(tempCat2);
    Cat *tempCat3 = new Cat("Kali", FEMALE, SHORTHAIR, 1.3);
    if(tempCat3->validate())
        addCat(tempCat3);
    Cat *tempCat4 = new Cat("Trin", FEMALE, MANX, 1.4);
    if(tempCat4->validate())
        addCat(tempCat4);
    Cat *tempCat5 = new Cat("Chili", MALE, SHORTHAIR, 1.5);
    if(tempCat5->validate())
        addCat(tempCat5);

    printAllCats();


    cout << "Done with " << PROGRAM_NAME << endl;

}
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

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"
#include "validateData.h"

struct Cat  cats[MAX_CATS];
NumCats     totalCats;

//  int argc, char* argv[] // if i need command line add this to main()
int main()
{
    // @todo: use assert() to test code

    initializeDatabase();

    addCat("Leonard", MALE, SHORTHAIR, false, 13.1, BLACK, WHITE, getNewLiscenseNumber());
    addCat("Penny", FEMALE, SHORTHAIR, true, 9.9, RED, GREEN, getNewLiscenseNumber());
    addCat("", UNKNOWN_GENDER, SPHYNX, true, 10, GREY, WHITE, getNewLiscenseNumber());  // Should fail
    addCat("Recruit", MALE, SHORTHAIR, true, 0, BLUE, RED, getNewLiscenseNumber());  // Should fail
    addCat("012345678901234567890123456789012345678901234567890", MALE, SPHYNX, false, 9.5, PURPLE, RED, getNewLiscenseNumber()); // Should fail

    printAllCats();

    printf("\n");

    int testCat = findCat("Recruit");  // Should fail
    if(testCat != -1)
        printCat(testCat);

    addCat("Recruit", MALE, SHORTHAIR, true, 10.4, BLUE, RED, getNewLiscenseNumber());

    testCat = findCat("Recruit");
    if(testCat != -1)
        printCat(testCat);
    addCat("Recruit", MALE, SHORTHAIR, true, 10.4, BLUE, RED, getNewLiscenseNumber());

    testCat = findCat("Recruit");
    if(testCat != -1)
        printCat(testCat);

    updateCatName(2, "Big cat");
    printCat(2);

    printf("\n");

    updateCatName(2, "Leonard"); // Should fail
    updateCatName(3, "Recurit"); // Should fail
    updateCatName(1, "");            // Should fail
    updateCatName(1, "012345678901234567890123456789012345678901234567890"); // Should fail

    printf("\n");

    printCat(0);
    fixCat(0);
    printCat(0);
    fixCat(0);

    printf("\n");

    printCat(2);
    updateCatWeight(2, 13.0);
    printCat(2);
    updateCatWeight(15, 2.0);  // Should fail

    printf("\n");

    printCat(0);
    updateCollarColor1(0, WHITE); // no validation yet, so should be fine
    updateCollarColor2(0, BLACK); // should be fine now, when above fails this will fail
    printCat(0);

    printf("\n");

    printCat(2);
    updateLiscense(2, 100); // should fail, no validation yet
    updateLiscense(2, getNewLiscenseNumber());
    printCat(2);

    printf("\n");

    printCat(1);
    updateCatWeight(1, -15.2); // Should fail
    printCat(1);

    printf("\n");

    printAllCats();
    deleteCat(0);

    printf("\n");

    printAllCats();
    deleteAllCats();

    printf("\n");

    printAllCats();

}
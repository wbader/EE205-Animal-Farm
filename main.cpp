///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_animal_farm  - EE 205 - Spr 2022
///
/// @file    main.c
/// @version 1.0 - Initial version
///
/// This is Animal Farm 2, we're creating a database of cats using classes and a
/// linked list implementation.  This program was modified from AF1, and will be adapted further
/// to AF 3, 4, 5 or beyond!
///
/// Compile: $ make
///
/// Usage:   $ ./animalfarm
///
/// @author  Waylon Bader <wbader@hawaii.edu>
/// @date    10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "config.h"

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_NAME << endl ;
    SinglyLinkedList catDB ;
    catDB.push_front( new Cat( "Loki", Color::CREAM, true, Gender::MALE, 1.0 ) ) ;
    catDB.push_front( new Cat( "Milo", Color::BLACK, true, Gender::MALE, 1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali", Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin", Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;
    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true, Gender::MALE, 1.5 ) );
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;
    cout << "Done with " << PROGRAM_NAME ;
    return( EXIT_SUCCESS ) ;
}
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

/// This is just a test bed for the Cat class and the linked list, not production code

#include "Cat.h"
#include "config.h"
#include "catDatabase.h"
#include "Weight.h"
#include "Node.h"
#include "SinglyLinkedList.h"

#include <iostream>

#define DEBUG

using namespace std;

Cat* catDatabaseHeadPointer = nullptr;

int main()
{
    cout << "DEBUG - Starting " << PROGRAM_NAME << endl;

    SinglyLinkedList linkedList;

    Node* firstNode = new Node();
    Node* secondNode = new Node();

    linkedList.dump();
    linkedList.push_front(secondNode);
    linkedList.push_front(firstNode);

    linkedList.dump();

    Node* temp = linkedList.pop_front();

    if(temp == firstNode)
        cout << "Pop worked" << endl;

    linkedList.dump();

    delete firstNode;
    delete secondNode;
    cout << "DEBUG - Done with " << PROGRAM_NAME << endl;
}
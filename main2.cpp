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

    firstNode->dump();
    secondNode->dump();

    linkedList.dump();

    for (int i = 0; i < 5; ++i) {
        linkedList.push_front(new Node());
    }

    linkedList.push_front(secondNode);

    for (int i = 0; i < 5; ++i) {
        linkedList.push_front(new Node());
    }

    linkedList.insert_after(secondNode, firstNode);

    linkedList.dump();

    cout << endl;

    linkedList.pop_front();

    linkedList.dump();

    if (firstNode > secondNode)
        cout << firstNode << " > " << secondNode << endl;
    else
        cout << firstNode << " < " << secondNode << endl;

    linkedList.dump();

    linkedList.deleteAllNodes();
    if(linkedList.empty())
        cout << "Successfully deleted all nodes" << endl;


    delete firstNode;
    delete secondNode;
    cout << "DEBUG - Done with " << PROGRAM_NAME << endl;
}
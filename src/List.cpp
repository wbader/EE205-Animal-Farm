///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include "config.h"

#include <cassert>

bool List::empty() const noexcept {
    assert(validate());

    return (head == nullptr);
}

unsigned int List::size() const noexcept {
    assert(validate());

    return count;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );

    while( head != nullptr ) {
        pop_front();
    }

#ifdef DEBUG
    cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif

    assert( validate() );
}

bool List::isIn(Node *aNode) const {
    assert(validate());

    bool isFound = false;
    Node* testNode = head;

    while (testNode != nullptr)
    {
        if (testNode == aNode)
        {
            isFound = true;
            break;
        }
        testNode = testNode->next;
    }

    return isFound;
}

bool List::isSorted() const noexcept {
    assert(validate());

    return false;
}

Node *List::get_first() const noexcept {
    assert(validate());

    return head;
}

Node *List::get_next(const Node *currentNode) {
    assert(validate());

    if(currentNode == nullptr)
        throw std::invalid_argument(PROGRAM_NAME " List::get_next(*Node) - passed NULL");

    return currentNode->next;
}

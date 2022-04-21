///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "List.h"
#include "Node.h"

class SinglyLinkedList : public List {
    SinglyLinkedList();
    void push_front(Node *newNode);
    Node * pop_front() noexcept override;
    void insert_after(Node *currentNode, Node *newNode);
    void dump() const noexcept override;
    bool validate() const noexcept override;
};



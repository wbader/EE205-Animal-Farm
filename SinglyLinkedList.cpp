///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "SinglyLinkedList.h"
#include "config.h"

#include <cassert>
#include <iostream>

SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
    count = 0;

    assert(validate());
}

bool SinglyLinkedList::validate() const noexcept {
    if(empty() && size() == 0)
        return true;
    else if (empty() && size() != 0)
    {
        std::cerr << PROGRAM_NAME << " SinglyLinkedList::validate() failed due to mismatched count, head = NULL count != 0" << std::endl;
        return false;
    }

    Node* testNode = head;
    while (testNode != nullptr)
    {
        if (!testNode->validate()) { return false; }

        testNode = testNode->next;
    }

    return true;
}

void SinglyLinkedList::dump() const noexcept {
    std::cout << "SinglyLinkedList:  head=[" << head << "] count=[" << count << "]" <<  std::endl;
    Node *testNode = head;
    while (testNode != nullptr)
    {
        testNode->dump();
        testNode = testNode->next;
    }
}

void SinglyLinkedList::push_front(Node *newNode) {
    assert(validate());

    if(newNode == nullptr)
        throw std::invalid_argument(PROGRAM_NAME " SinglyLinkedList::push_front(Node*) was passed a nullptr");

    if(!newNode->validate())
        throw std::domain_error(PROGRAM_NAME " SinglyLinkedList::push_front(Node*) was passed an invalid node");

    if(isIn(newNode))
        throw std::logic_error(PROGRAM_NAME " SinglyLinkedList::push_front(Node*) was passed a Node already in the LL");

    Node *oldHead = head;
    head = newNode;
    newNode->next = oldHead;

    count++;

    assert(validate());
}

Node *SinglyLinkedList::pop_front() noexcept {
    assert(validate());

    Node* returnNode = head;

    assert(returnNode->validate());

    head = returnNode->next;
    returnNode->next = nullptr;

    count--;

    assert(validate());

    return returnNode;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    assert(currentNode->validate());
    assert(newNode->validate());

    if(empty())
        throw std::logic_error(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): the list is empty, can't insert after");

    if(currentNode == nullptr)
        throw std::invalid_argument(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): currentNode passed was nullptr");

    if(!isIn(currentNode))
        throw std::logic_error(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): currentNode is not in the list");

    if(newNode == nullptr)
        throw std::invalid_argument(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): newNode passed was nullptt");

    if(!newNode->validate())
        throw std::domain_error(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): newNode wasn't a valid Node");

    if(isIn(newNode))
        throw std::logic_error(PROGRAM_NAME " SinglyLinkedList::insert_after(Node*, Node*): newNode was already in the list");


    Node* tempNextNode = currentNode->next;
    currentNode->next = newNode;
    newNode->next = tempNextNode;

    count++;
}

///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Node.h"

class List {
public:
    bool empty() const noexcept;
    unsigned int size() const noexcept;
    bool isIn(Node *aNode) const;
    bool isSorted() const noexcept;
    Node * get_first() const noexcept;
    static Node * get_next(const Node *currentNode);
    void deleteAllNodes() noexcept;

    virtual Node * pop_front() noexcept = 0;
    virtual void dump() const noexcept = 0;
    virtual bool validate() const noexcept = 0;

protected:
    Node * head = nullptr;
    unsigned int count = 0;
};
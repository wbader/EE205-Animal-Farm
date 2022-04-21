///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

class Node {
public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);

    virtual ~Node();

protected:
    static bool compareByAddress(const Node *node1, const Node *node2);
    Node* next = nullptr;

    friend class List;
    friend class SinglyLinkedList;
};

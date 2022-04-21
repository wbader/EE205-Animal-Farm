///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"
#include <iostream>

// @todo: ask about operator> and compareByAddress() in class
bool Node::compareByAddress(const Node *node1, const Node *node2) {
    return (&node1 > &node2);
}

bool Node::operator>(const Node &rightSide) {
    //return compareByAddress(this, rightSide);
    return false;
}

//@todo: finish Node::validate()
bool Node::validate() const noexcept {
    return false;
}

void Node::dump() const {
    PRINT_HEADING_FOR_DUMP;
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next;

}

Node::~Node() {
    next = nullptr;
}


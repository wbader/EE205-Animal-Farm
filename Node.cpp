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

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    return (&node1 > &node2);
}

bool Node::operator>(const Node &rightSide) {
    return compareByAddress(this, *rightSide);
}

bool Node::validate() const noexcept {
    return false;
}


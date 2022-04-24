///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"

#include <iostream>
#include <cassert>

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    assert(node1->validate());
    assert(node2->validate());

    return (node1 > node2);
}

bool Node::operator>(const Node &rightSide) {
    assert(validate());
    assert(rightSide.validate());

    return compareByAddress(this, &rightSide);
}

bool Node::validate() const noexcept {
    /// clang tidy doesn't like the following line, however I'm not confident I can write well defined c++ code
    if(this == nullptr)
    {
        std::cerr << PROGRAM_NAME << " Node::validate(): Node never initialized" << std::endl;
        return false;
    }

    Node* testNode = this->next;
    while (testNode != nullptr)
    {
        if(testNode == this)
        {
            std::cerr << PROGRAM_NAME << " Node::validate(): infinite loop found, someLaterNode->next == this" << std::endl;
            return false;
        }
        testNode = testNode->next;
    }

    return true;
}

void Node::dump() const {
    PRINT_HEADING_FOR_DUMP;
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl;
}

Node::~Node() {
    next = nullptr;
}


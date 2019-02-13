// Created by Desta on 2/12/2019.
// This .ccp defines the functions which modifies the nodes. Allowing
//      creation of nodes.

#include "Nodes.h"

Node:: Node(const string & cur_data)
{
    m_data = cur_data;
    m_left_child = nullptr;
    m_right_child = nullptr;
}

string Node:: get_data() const
{
    return m_data;
}

void Node:: set_data(const string & cur_data)
{
    m_data = cur_data;
}

Node * & Node:: get_left_child()
{
    return m_left_child;
}

void Node:: set_left_child( Node * const cur_left_child)
{
    m_left_child = cur_left_child;
}

Node * &Node:: get_right_child()
{
    return m_right_child;
}

void Node:: set_right_child( Node * const cur_right_child)
{
    m_right_child = cur_right_child;
}

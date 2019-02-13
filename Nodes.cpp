// Created by Desta on 2/12/2019.
// This .ccp defines the functions which modifies the nodes. Allowing
//      creation of nodes.

#include "Nodes.h"

Node:: Node(int id_num, string name, double gpa)
{
    m_student_id = id_num;
    m_student_name = name;
    m_student_gpa = gpa;
    m_left_child = nullptr;
    m_right_child = nullptr;
}

string Node::get_student_name()
{
    return m_student_name;
}

double Node:: get_student_gpa()
{
    return m_student_gpa;
}

int Node::get_student_id()
{
    return m_student_id;
}
void Node:: set_student_info(int id, string name, double gpa)
{
    m_student_id = id;
    m_student_gpa = gpa;
    m_student_name = name;
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

// Created by Desta on 2/12/2019.
// Description: Describes the properties of individual nodes.

#ifndef BST_PROJECT_NODES_H
#define BST_PROJECT_NODES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Node {

private:
    int m_student_id;
    string m_student_name;
    double m_student_gpa;

    Node * m_left_child;
    Node * m_right_child;


public:
    // Constructor to create a new node with previous information
    Node(int id_num, string name, double gpa);

    // Obtains student name from the node
    string get_student_name();

    // Obtains student gpa from node
    double get_student_gpa();

    // Obtains student id from node
    int get_student_id();
    // Obtains the left node from the BST
    Node * & get_left_child();

    // Obtains the right node from the BST
    // Returns the right side node
    Node * & get_right_child();

    // Sets the data into a node
    void set_student_info(int id_num, string name, double gpa);

    // Sets the node to the left side of the BST
    void set_left_child(Node * const cur_left_child);

    // Sets the node to the right side of the BST
    void set_right_child(Node * const cur_right_child);
};

#endif //BST_PROJECT_NODES_H

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
    string m_data;
    Node * m_left_child;
    Node * m_right_child;

public:
    // Constructor to create a new node with previous information
    Node(const string &temp_data = "");

    // Obtains information from a node
    string get_data() const;

    // Obtains the left node from the BST
    //
    Node * & get_left_child();

    // Obtains the right node from the BST
    // Returns the right side node
    Node * & get_right_child();

    // Sets the data into a node
    void set_data(const string & cur_data);

    // Sets the node to the left side of the BST
    void set_left_child(Node * const cur_left_child);

    // Sets the node to the right side of the BST
    void set_right_child(Node * const cur_right_child);
};

#endif //BST_PROJECT_NODES_H

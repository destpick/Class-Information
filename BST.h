//
// Created by Desta on 2/12/2019.
// Description: This class allows for the traversal of the BST

#ifndef BST_PROJECT_BST_H
#define BST_PROJECT_BST_H

#include "Nodes.h"

using namespace std;

class BST {
private:
    // Member node for the root of the BST
    Node * m_root;

    // Insert private information into the BST which insures only class
    //      the function to be called within the specific class
    bool insert(Node * &cur_tree, int id, string name, double gpa);

    /*
     * Print the tree in order based on the root
     *      Algorithm:
     *          1) go as far left as possible
     *          2) process the node (print)
     *          3) go as far right as possible
     */
    void in_order_traversal(Node * bst_root);

    /*
     * Print the tree in pre-order traversal based on the root
     *      Algorithm:
     *          1) process the node (print)
     *          2) go as far left as possible
     *          3) go as far right as possible
     */
    void pre_order_traversal(Node * bst_root);

    /*
     * Print the tree in post order traversal based on the root
     *      Algorithm:
     *          1) go as far left as possible
     *          2) go as far right as possible
     *          3) process the node (print)
     */
    void post_order_traversal(Node * bst_root);

    /*
     * Print the tree in reverse order traversal based on the root
     *      Algorithm:
     *          1) go as far right as possible
     *          2) process the node (print)
     *          3) go as far left as possible
     */

    void reverse_order_traversal(Node * bst_root);

public:
    // Constructor creates a BST with a null node
    BST(Node * new_tree = nullptr);

    // Inserts the data into the BST
    bool insert(int id, string name, double gpa);

    // Calls the private in order traversal function
    void in_order_traversal();

    // Calls the private post order traversal function
    void post_order_traversal();

    // Calls the private pre order traversal function
    void pre_order_traversal();

    // Calls the private reversed order traversal function
    void reverse_order_traversal();

    // Prints the data from the current node
    void print_node_information(Node * cur_node);

    // Returns the head of the BST
    Node * get_root(BST * tree);
};

#endif //BST_PROJECT_BST_H

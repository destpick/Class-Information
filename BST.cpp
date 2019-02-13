//
// Created by Desta on 2/12/2019.
//

#include "BST.h"

BST::BST(Node * new_tree)
{
    m_root = new_tree;
}

bool BST::insert(int id, string name, double gpa)
{
    bool inserted_successfully = false;
    inserted_successfully = insert(m_root, id, name, gpa);
    return inserted_successfully;
}

bool BST:: insert(Node * & root, int id, string name, double gpa) {
    bool successful = false;

    // if base case has occurred
    if (root == nullptr) {
        Node *temp_node = nullptr;
        temp_node = new Node(id, name, gpa);

        if (temp_node != nullptr) {
            successful = true;
            root = temp_node;
        }
    }
    // step right subtree
    else if (id > (root)->get_student_id()) {
        // recursive step
        successful = insert(((root)->get_right_child()), id, name, gpa);
    }

    // step left subtree
    else if (id < (root)->get_student_id()) {
        // recursive step
        successful = insert(((root)->get_left_child()), id, name, gpa);
    }

    else
    {
        cout << "The node is a duplicate " << id << " has already be described" << endl;
    }

    return successful;
}

void BST::in_order_traversal()
{
    in_order_traversal(m_root);
}

void BST::pre_order_traversal()
{
    pre_order_traversal(m_root);
}

void BST::post_order_traversal()
{
    post_order_traversal(m_root);
}

void BST::reverse_order_traversal()
{
    reverse_order_traversal(m_root);
}

void BST::in_order_traversal(Node  * root)
{
    if(root != nullptr)
    {
        in_order_traversal(root -> get_left_child());
        print_node_information(root);
        in_order_traversal(root -> get_right_child());
    }
}

void BST:: pre_order_traversal(Node * root)
{
    if(root != nullptr)
    {
        print_node_information(root);
        pre_order_traversal(root -> get_left_child());
        pre_order_traversal(root -> get_right_child());
    }
}

void BST:: post_order_traversal(Node * root)
{
    if(root != nullptr)
    {
        post_order_traversal(root -> get_left_child());
        post_order_traversal(root -> get_right_child());
        print_node_information(root);
    }
}

void BST:: reverse_order_traversal(Node * root)
{
    if(root != nullptr)
    {
        reverse_order_traversal(root -> get_right_child());
        print_node_information(root);
        reverse_order_traversal(root -> get_left_child());
    }
}

void BST:: print_node_information(Node * current_node)
{
    cout << "Student Name: " << current_node -> get_student_name() << endl;
    cout << "Student Id: " << current_node -> get_student_id() << endl;
    cout << "Student GPA: " << current_node -> get_student_gpa() << endl;
    cout << " =================" << endl;
}
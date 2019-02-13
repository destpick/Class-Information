//
// Created by Desta on 2/12/2019.
//

#include "BST.h"

BST::BST(Node * new_tree)
{
    m_root = new_tree;
}

bool BST::insert(const string & cur_data)
{
    bool inserted_successfully = false;
    inserted_successfully = insert(m_root, cur_data);
    return inserted_successfully;
}

bool BST:: insert(Node * & root, const string & cur_data) {
    bool successful = false;

    // if base case has occurred
    if (root == nullptr) {
        Node *temp_node = nullptr;
        temp_node = new Node(cur_data);

        if (temp_node != nullptr) {
            successful = true;
            root = temp_node;
        }
    }
    // step right subtree
    else if (cur_data > (root)->get_data()) {
        // recursive step
        successful = insert(((root)->get_right_child()), cur_data);
    }

    // step left subtree
    else if (cur_data < (root)->get_data()) {
        // recursive step
        successful = insert(((root)->get_left_child()), cur_data);
    }

    else
    {
        cout << "The node is a duplicate " << cur_data << " has already be described" << endl;
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
        cout << root->get_data() << endl;
        in_order_traversal(root -> get_right_child());
    }
}

void BST:: pre_order_traversal(Node * root)
{
    if(root != nullptr)
    {
        cout << root -> get_data() << endl;
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
        cout << root -> get_data() << endl;
    }
}

void BST:: reverse_order_traversal(Node * root)
{
    if(root != nullptr)
    {
        reverse_order_traversal(root -> get_right_child());
        cout << root -> get_data() << endl;
        reverse_order_traversal(root -> get_left_child());
    }
}
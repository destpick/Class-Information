#include "BST.h"
#include "Nodes.h"

#include <iostream>

int main()
{
    ifstream myfile;
    string student_name;
    int student_id;
    double student_gpa;
    myfile.open("example.txt");

    BST in_order_tree;

    while(!myfile.eof())
    {
        myfile >> student_name >> student_id >> student_gpa;
        in_order_tree.insert(student_id, student_name, student_gpa);
    }
    in_order_tree.in_order_traversal();

    myfile.close();

    return 0;
}
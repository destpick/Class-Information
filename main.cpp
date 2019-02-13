#include "BST.h"
#include "Nodes.h"

#include <iostream>

int main()
{
    ifstream myfile;
    string test;
    myfile.open("example.txt");
    myfile >> test;
    myfile.close();

    cout << test << endl;
    BST in_order_tree;

    in_order_tree.insert(123, "Desta", 3.5);
    in_order_tree.insert(234, "Adam", 4.0);
    in_order_tree.insert(432, "Slater", 3.7);
    in_order_tree.insert(21, "Kostya", 3.1);
    in_order_tree.insert(143, "Dimitri", 3.9);
    in_order_tree.insert(201, "Garth", 2.9);
    in_order_tree.insert(321, "Bailey", 3.2);
    in_order_tree.insert(323, "Alix", 4.0);

    in_order_tree.in_order_traversal();
    system("pause");
    return 0;
}
#include "BST.h"
#include "Nodes.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    BST in_order_tree;

    in_order_tree.insert("6");
    in_order_tree.insert("5");
    in_order_tree.insert("7");

    in_order_tree.reverse_order_traversal();
    system("pause");
    return 0;
}
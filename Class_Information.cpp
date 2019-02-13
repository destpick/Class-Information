//
// Created by Desta on 2/12/2019.
//

#include "Class_Information.h"


ClassInformation::ClassInformation()
{
    // NTD
}

int ClassInformation::get_class_size(BST * tree)
{
    int total_course_size = 0;
    if (tree -> m_root != NULL )
    {

    }
}
    total_ = get_class_size(root, class_size);
}

int ClassInformation::get_class_size(Node * root, int size_left, int size_right)
{
    while( root != nullptr)
    {
        get_class_size(root ->get_left_child(), ++size);
        get_class_size(root -> get_right_child(), ++size)
}

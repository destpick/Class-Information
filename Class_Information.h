//
// Created by Desta on 2/12/2019.
//

#ifndef BST_PROJECT_CLASS_INFORMATION_H
#define BST_PROJECT_CLASS_INFORMATION_H

#include "BST.h"

class ClassInformation {

public:

    // Constructor
    ClassInformation();

    // Returns the average GPA of the course
    double get_gpa_average(Node * root);


    // Returns the number of individuals in the course
    int get_class_size(Node * root);

private:
    double m_class_average_gpa;
    int m_class_size;

    // Calculates the number of individuals in the course
    int get_class_size(Node * root, int size);
};


#endif //BST_PROJECT_CLASS_INFORMATION_H

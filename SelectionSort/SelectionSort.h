#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include "../Sort/Sort.h"

class SelectionSort : public Sort
{
public: 
    void sort(std::vector <int> &input, Order order);
    std::string getName();
};
#endif
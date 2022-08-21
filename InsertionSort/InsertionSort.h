#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include "../Sort/Sort.h"

class InsertionSort : public Sort
{
public: 
    void sort(std::vector <int> &input, Order order);
};
#endif
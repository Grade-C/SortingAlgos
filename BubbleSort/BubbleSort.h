#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include "../Sort/Sort.h"
class BubbleSort : public Sort
{
public: 
    void sort(std::vector <int> &input, Order);
    std::string getName();
};
#endif
#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include "../Sort/Sort.h"
#include "./Split/Split.h"
#include "./Merge/Merge.h"

class MergeSort : public Sort, public Split, public Merge
{
public: 
    void sort(std::vector <int> &input, Order order);
    std::string getName();
};
#endif
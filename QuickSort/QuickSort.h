#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include "../Sort/Sort.h"
#include "./Partition/Partition.h"

class QuickSort : public Sort, public Partition
{
private:
    void sort(int low, int high, std::vector<int> &list);
    void modifyList(std::vector<int> &list);

public:
    void sort(std::vector<int> &input, Order order);
    std::string getName();
};
#endif
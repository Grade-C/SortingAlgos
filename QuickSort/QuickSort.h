#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include "../Sort/Sort.h"
#include <limits>

class QuickSort : public Sort
{
private:
    int INFINITY = std::numeric_limits<int>::infinity();
    struct PartitionResult
    {
        int left = NULL;
        int right = NULL;
    };
    int partition(std::vector<int> list, int low, int high);

public:
    void sort(std::vector<int> &input, Order order);
    std::string getName();
};
#endif
#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include "../Sort/Sort.h"
#include "./Partition/Partition.h"

class QuickSort : public Sort, public Partition
{
private:
    void sort(int low, int high, std::vector<int> &list, Order order);
    void modifyList(std::vector<int> &list, Order order);

public:
    struct Variants{
        std::string FEP = "FirstElementPivot";
        std::string LEP = "LastElementPivot";
        std::string MEP = "MedianElementPivot";
    };
    void sort(std::vector<int> &input, Order order);
    void sort(std::vector<int> &input, std::string varient , Order order);
    std::string getName();
};
#endif
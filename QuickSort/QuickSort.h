#ifndef QUICK_SORT_H
#define QUICK_SORT_H
//#include "../Sort/Sort.h"
#include "QuickSortManager.h"
//#include "./LastElementPivot/Partition.h"
//#include <map>
//#include "./LastElementPivot/"

class QuickSort : public QuickSortManager //, public Partition
{
    /* public:
        enum Variants
        {
            FEP,
            LEP,
            MEP
        }; */
    // void sort(std::vector<int> &input, Order order=Asc);
public:
    void sort(std::vector<int> &input, Variants variant = LEP, Order order = Asc);
    std::string getName();

private:
    // LEP::Partition lepPartition;
    // std::map<Variants, BasePartition *> variantsMap = {{LEP, &lepPartition}};
    // void sort(int low, int high, std::vector<int> &list, Variants variant, Order order);
    void modifyList(std::vector<int> &list, Order order);
};
#endif
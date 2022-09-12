#ifndef QUICK_SORT_MANAGER_H
#define QUICK_SORT_MANAGER_H
#include <map>

#include "../Sort/Sort.h"
#include "./LastElementPivot/Partition.h"

class QuickSortManager : public Sort
{
public:
    enum Variants
    {
        FEP,
        LEP,
        MEP
    };

private:
    LEP::Partition lepPartition;
    std::map<Variants, BasePartition *> variantsMap = {{LEP, &lepPartition}};

protected:
    void sort(int low, int high, std::vector<int> &list, Variants variant, Order order);
    
};
#endif

#ifndef QS_LEP_H
#define QUICK_SORT_LEP_H
#include "../../Sort/Sort.h"
#include "Partition.h"

namespace LEP
{
    class PivotBasedSort : public Sort, public Partition
    {
    private:
        void sort(int low, int high, std::vector<int> &list, Order order);

    public:
        std::string PivotBasedSort::getName();
        void sort(std::vector<int> &input, Order order);
        
    };
}

#endif

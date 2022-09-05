#ifndef QS_PARTITION_FIRST_ELEMENT_PIVOT_H
#define QS_PARTITION_FIRST_ELEMENT_PIVOT_H
#include "./AscendingOrder/AscendingOrder.h"
#include "./DescendingOrder/DescendingOrder.h"
class FirstElementPivot : public AscendingOrder, public DescendingOrder
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot, bool isAscending);
    void increaseI(int &i, std::vector<int> list, int pivot);
    void decreaseJ(int &j, const int i, std::vector<int> list, int pivot, bool isAscending);
};
#endif
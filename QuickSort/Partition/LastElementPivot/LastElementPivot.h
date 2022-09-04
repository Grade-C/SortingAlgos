#ifndef QS_PARTITION_LAST_ELEMENT_PIVOT_H
#define QS_PARTITION_LAST_ELEMENT_PIVOT_H
#include "./Asc/Asc.h"
class LastElementPivot : public Asc
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot, bool isAscending);
    void decreaseJ(int &j, std::vector<int> list, int pivot, bool isAscending);
};
#endif
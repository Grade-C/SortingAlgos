#ifndef QS_PARTITION_LAST_ELEMENT_PIVOT_H
#define QS_PARTITION_LAST_ELEMENT_PIVOT_H
#include "./Asc/Asc.h"
#include "./Des/Des.h"
class LastElementPivot : public Asc, public Des
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot, bool isAscending);
    void decreaseJ(int &j, const int i, std::vector<int> list, int pivot, bool isAscending);
};
#endif
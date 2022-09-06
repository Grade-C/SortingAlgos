#ifndef QS_PARTITION_DESCENDING_ORDER_H
#define QS_PARTITION_DESCENDING_ORDER_H
//#include "../Interface/ManipulatorIJ.h"
#include "../AbstractIJ/AbstractIJ.h"
class DescendingOrder : virtual public AbstractIJ
{
protected:
    void increaseI(int &i, int high, std::vector<int> list, int pivot);
    void decreaseJ(int &j ,int low, std::vector<int> list, int pivot, const int i);
};
#endif
#ifndef QS_PARTITION_DESCENDING_ORDER_H
#define QS_PARTITION_DESCENDING_ORDER_H
//#include "../Interface/ManipulatorIJ.h"
#include "../AbstractIJ/AbstractIJ.h"
class DescendingOrder : virtual public AbstractIJ
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot);
    void decreaseJ(int &j ,std::vector<int> list, int pivot, const int i);
};
#endif
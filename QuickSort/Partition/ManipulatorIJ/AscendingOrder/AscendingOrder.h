#ifndef QS_PARTITION_ASCENDING_ORDER_H
#define QS_PARTITION_ASCENDING_ORDER_H
#include "../AbstractIJ/AbstractIJ.h"
class AscendingOrder : virtual public AbstractIJ
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot, const int j);
    void decreaseJ(int &j, std::vector<int> list, int pivot);
};
#endif
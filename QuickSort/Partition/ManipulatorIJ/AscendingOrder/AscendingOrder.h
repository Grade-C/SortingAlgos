#ifndef QS_PARTITION_ASCENDING_ORDER_H
#define QS_PARTITION_ASCENDING_ORDER_H
#include "../AbstractIJ/AbstractIJ.h"
class AscendingOrder : virtual public AbstractIJ
{
protected:
    void increaseI(int &i, int high, std::vector<int> list, int pivot);
    void decreaseJ(int &j, int low, std::vector<int> list, int pivot);
};
#endif
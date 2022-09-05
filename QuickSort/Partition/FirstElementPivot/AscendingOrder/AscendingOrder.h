#ifndef QS_PARTITION_FIRST_ELEMENT_PIVOT_ASCENDING_ORDER_H
#define QS_PARTITION_FIRST_ELEMENT_PIVOT_ASCENDING_ORDER_H
#include "../Interface/ManipulatorIJ.h"
class AscendingOrder : virtual public ManipulatorIJ
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot);
    void decreaseJ(int &j, std::vector<int> list, int pivot);
};
#endif
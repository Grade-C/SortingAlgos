#ifndef QS_PARTITION_LAST_ELEMENT_PIVOT_ASC_H
#define QS_PARTITION_LAST_ELEMENT_PIVOT_ASC_H
#include "../Interface/Interface.h"
class Asc : public Interface
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot);
    void decreaseJ(int &j, std::vector<int> list, int pivot);
};
#endif
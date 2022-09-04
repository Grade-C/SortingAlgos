#ifndef QS_PARTITION_LAST_ELEMENT_PIVOT_DES_H
#define QS_PARTITION_LAST_ELEMENT_PIVOT_DES_H
#include "../Interface/Interface.h"
class Des : public Interface
{
protected:
    void increaseI(int &i, std::vector<int> list, int pivot);
    void decreaseJ(int &j, const int i ,std::vector<int> list, int pivot);
};
#endif
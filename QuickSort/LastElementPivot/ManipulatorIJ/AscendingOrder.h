#ifndef QS_LEP_ASCO_H
#define QS_LEP_ASCO_H
#include "../AbstractIJ/AbstractIJ.h"
class AscendingOrder : virtual public AbstractIJ
{
protected:
    void increaseI(int &i, int high, std::vector<int> list, int pivot);
    void decreaseJ(int &j, int low, std::vector<int> list, int pivot);
};
#endif
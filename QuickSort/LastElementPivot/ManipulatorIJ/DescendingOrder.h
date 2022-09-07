#ifndef QS_LEP_DESO_H
#define QS_LEP_DESO_H
#include "../../Bases/BaseIJManipulator.h"
class DescendingOrder : virtual public BaseIJManipulator
{
protected:
    void increaseI(int &i, int high, std::vector<int> list, int pivot);
    void decreaseJ(int &j ,int low, std::vector<int> list, int pivot);
};
#endif
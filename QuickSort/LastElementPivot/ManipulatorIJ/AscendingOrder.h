#ifndef QS_LEP_ASCO_H
#define QS_LEP_ASCO_H
#include "../../Bases/BaseIJManipulator.h"

namespace LEP
{
    class AscendingOrder : virtual public BaseIJManipulator
    {
    protected:
        void increaseI(int &i, int high, std::vector<int> list, int pivot);
        void decreaseJ(int &j, int low, std::vector<int> list, int pivot);
    };

}

#endif
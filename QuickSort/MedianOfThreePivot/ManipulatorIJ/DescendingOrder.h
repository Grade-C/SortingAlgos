#ifndef QS_MOTP_DESO_H
#define QS_MOTP_DESO_H
namespace MOTP
{
#include "../../Bases/BaseIJManipulator.h"
    class DescendingOrder : virtual public BaseIJManipulator
    {
    protected:
        void increaseI(int &i, int high, std::vector<int> list, int pivot);
        void decreaseJ(int &j, int low, std::vector<int> list, int pivot);
    };
}
#endif
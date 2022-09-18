#ifndef QS_MOTP_MANIJ_H
#define QS_MOTP_MANIJ_H
#include "AscendingOrder.h"
#include "DescendingOrder.h"
namespace MOTP
{
    class ManipulatorIJ : public AscendingOrder, public DescendingOrder
    {
    private:
        bool isAscending;
        void increaseI(int &i, const int high, std::vector<int> list, int pivot);
        void decreaseJ(int &j, const int low, std::vector<int> list, int pivot);

    protected:
        void increaseI(int &i, const int high, std::vector<int> list, int pivot, bool isAscending);
        void decreaseJ(int &j, const int low, std::vector<int> list, int pivot, bool isAscending);
    };
}
#endif
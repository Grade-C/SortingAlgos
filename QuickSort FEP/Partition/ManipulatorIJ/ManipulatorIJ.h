#ifndef QS_PARTITION_MANIPULATORIJ_H
#define QS_PARTITION_MANIPULATORIJ_H
#include "./AscendingOrder/AscendingOrder.h"
#include "./DescendingOrder/DescendingOrder.h"
class ManipulatorIJ : public AscendingOrder, public DescendingOrder
{
    private:
    
protected:
    void increaseI(int &i, const int j, const int high, std::vector<int> list, int pivot, bool isAscending);
    void decreaseJ(int &j, const int i, const int low , std::vector<int> list, int pivot, bool isAscending);
};
#endif
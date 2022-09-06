#ifndef QS_PARTITION_MANIPULATORIJ_H
#define QS_PARTITION_MANIPULATORIJ_H
#include "./AscendingOrder/AscendingOrder.h"
#include "./DescendingOrder/DescendingOrder.h"
class ManipulatorIJ : public AscendingOrder, public DescendingOrder
{
    private:
    bool isAscending;
    void increaseI(int &i, const int high, std::vector<int> list, int pivot);
    void decreaseJ(int &j, const int low , std::vector<int> list, int pivot);
    
protected:
    void increaseI(int &i, const int high, std::vector<int> list, int pivot, bool isAscending);
    void decreaseJ(int &j, const int low , std::vector<int> list, int pivot, bool isAscending);
};
#endif
#ifndef QS_PARTITION_H
#define QS_PARTITION_H
#include <iostream>
#include <vector>
#include <limits>
#include "../../Utils/Utils.h"
#include "./FirstElementPivot/FirstElementPivot.h"

class Partition : public FirstElementPivot
{
protected:
    int INFINITY = std::numeric_limits<int>::max();
    int NEG_INFINITY = std::numeric_limits<int>::min();
    struct PartitionResult
    {
        int left = -1;
        int right = -1;
    };

public:
    Partition();
    PartitionResult partition(int low, int high, std::vector<int> &list, bool isAscending);

private:
    PartitionResult makePartitionResult(int low, int high, int smallerFinderIdx, std::vector<int> &list, bool isAscending);
};
#endif
#ifndef QS_PARTITION_H
#define QS_PARTITION_H
#include <iostream>
#include <vector>
#include <limits>
#include "../../Utils/Utils.h"

class Partition
{
protected:
    int INFINITY = std::numeric_limits<int>::infinity();
    struct PartitionResult
    {
        int left = NULL;
        int right = NULL;
    };

public:
    Partition();
    PartitionResult partition(int low, int high, std::vector<int> list);

private:
    PartitionResult makePartitionResult(int low, int high, int smallerFinderIdx, std::vector<int> list);
};
#endif
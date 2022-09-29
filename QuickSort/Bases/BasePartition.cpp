#include "BasePartition.h"

BasePartition::BasePartition()
{
}

BasePartition::~BasePartition()
{
}

BasePartition::PartitionResult BasePartition::makePartitionResult(const int low, const int high, const int newPivotIdx, std::vector<int> &list, const bool isAscending)
{
    int leftWindowSize = newPivotIdx - low;
    int rightWindowSize = high - newPivotIdx;
    PartitionResult partitionResult;

    if (leftWindowSize > 2)
    {
        partitionResult.left = newPivotIdx;
    }
    else if (leftWindowSize == 2)
    {
        if ((isAscending && list[newPivotIdx - 1] < list[newPivotIdx - 2]) || (!isAscending && list[newPivotIdx - 1] > list[newPivotIdx - 2]))
        {
            Utils::swap(list[newPivotIdx - 1], list[newPivotIdx - 2]);
        }
    }
    // Need tochange since we have removed Infinity from the algorithm 
    if (rightWindowSize > 3 ||
        ((isAscending && rightWindowSize == 3 && list[high] < this->INFINITY) || (!isAscending && rightWindowSize == 3 && list[high] > this->NEG_INFINITY)))
    {
        partitionResult.right = newPivotIdx;
    }
    else if ((isAscending && ((rightWindowSize == 3 && list[high] == this->INFINITY) || rightWindowSize == 2) && list[newPivotIdx + 1] > list[newPivotIdx + 2]) || (!isAscending && ((rightWindowSize == 3 && list[high] == this->NEG_INFINITY) || rightWindowSize == 2) && list[newPivotIdx + 1] < list[newPivotIdx + 2]))
    {
        Utils::swap(list[newPivotIdx + 1], list[newPivotIdx + 2]);
    }
    return partitionResult;
}









#include "Partition.h"

Partition::Partition()
{
}

Partition::PartitionResult Partition::makePartitionResult(int low, int high, int j, std::vector<int> &list, bool isAscending)
{
    int leftWindowSize = j - low;
    int rightWindowSize = high - j;
    PartitionResult partitionResult;

    if (leftWindowSize > 2)
    {
        partitionResult.left = j;
    }
    else if (leftWindowSize == 2)
    {
        if ((isAscending && list[j - 1] < list[j - 2]) || (!isAscending && list[j - 1] > list[j - 2]))
        {
            Utils::swap(list[j - 1], list[j - 2]);
        }
    }

    if (rightWindowSize > 3 ||
        ((isAscending && rightWindowSize == 3 && list[high] < this->INFINITY) || (!isAscending && rightWindowSize == 3 && list[high] > this->NEG_INFINITY)))
    {
        partitionResult.right = j;
    }
    else if ((isAscending && ((rightWindowSize == 3 && list[high] == this->INFINITY) || rightWindowSize == 2) && list[j + 1] > list[j + 2]) || (!isAscending && ((rightWindowSize == 3 && list[high] == this->NEG_INFINITY) || rightWindowSize == 2) && list[j + 1] < list[j + 2]))
    {
        Utils::swap(list[j + 1], list[j + 2]);
    }
    return partitionResult;
}

Partition::PartitionResult Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    int pivot = list[high]; // LEP
    int i = low;            // LEP
    int j = high - 1;       // LEP

    while (i < j) // LEP
    {
        increaseI(i, high, list, pivot, isAscending);
        decreaseJ(j, low, list, pivot, isAscending);
        if (i < j)
        {
            Utils::swap(list[i], list[j]);
        }
    }
    if (i >= j)
    {
        Utils::swap(list[high], list[i]); // LEP
    }
    return makePartitionResult(low, high, i, list, isAscending); // LEP
}

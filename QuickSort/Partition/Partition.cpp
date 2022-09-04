#include "Partition.h"


Partition::Partition(){
    //std::cout << "Inf: "<< this->INFINITY<< "\n";
    //PartitionResult partitionResult;
}

Partition::PartitionResult Partition::makePartitionResult(int low, int high, int j, std::vector<int> list, bool isAscending)
{
    int leftWindowSize = j - low;
    int rightWindowSize = high - j;

    PartitionResult partitionResult;

    if (leftWindowSize > 2)
    {
        partitionResult.left = j;
    }
    else if ( leftWindowSize == 2 )
    if((isAscending && list[j - 1] < list[j - 2]) || (!isAscending && list[j - 1] > list[j - 2]))
    {
        Utils::swap(list[j - 1], list[j - 2]);
    }

    if (rightWindowSize > 3 || ((isAscending && rightWindowSize == 3 && list[high] < this->INFINITY) || (!isAscending && rightWindowSize ==3 && list[high] > this->NEG_INFINITY)))
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
    int pivot = list[low]; // Pivoting the first value
    int i = low + 1; // i = greaterFinderIdx (ASC) | smallerFinderIdx (DESC)
    int j = high - 1; // j = smallerFinderIdx (ASC) | greaterFinderIdx (DESC)

    while (i < j)
    {
        while ((isAscending && list[i] <= pivot) || (!isAscending && list[i] > pivot))
        {
            i++;
        }
        while ((isAscending && list[j] > pivot) || (!isAscending && list[j] <= pivot))
        {
            j--;
        }
        if (i < j)
        {
            Utils::swap(list[i], list[j]); // swaps the value at i with j
        }
    }
    Utils::swap(list[low], list[j]); // swaps pivot with the value at j
    return makePartitionResult(low, high, j, list, isAscending);
}

#include "Partition.h"

/* void Partition::initializeData(int &i, int &j, int &pivot, const std::vector<int> list, const int high, const int low)
{
    pivot = list[high]; // LEP
    i = low;            // LEP
    j = high - 1;
} */

/* void Partition::preThresholdSwap(int &i, int &j, const int pivot, std::vector<int> &list, const int high, const int low, const bool isAscending)
{
    while (i < j) // LEP // Temporarily keeping. need to check whether it works with FEP
    {
        increaseI(i, high, list, pivot, isAscending);
        decreaseJ(j, low, list, pivot, isAscending);
        if (i < j)
        {
            Utils::swap(list[i], list[j]);
        }
    }
    
}  */

/* void Partition::postThresholdSwap(const int i, const int j, const int pivotFinalIdx, std::vector<int> &list)
{
    if (i >= j)
    {
        Utils::swap(list[pivotFinalIdx], list[i]); // LEP
    }

}  */

BasePartition::PartitionResult LEP::Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    //int pivot, i, j;
    int pivot = list[high]; // LEP
    int i = low;            // LEP
    int j = high - 1;
    //initializeData(i, j, pivot, list, high, low);
    //preThresholdSwap(i, j, pivot, list, high, low, isAscending);
    while (i < j) // LEP // Temporarily keeping. need to check whether it works with FEP
    {
        increaseI(i, high, list, pivot, isAscending);
        decreaseJ(j, low, list, pivot, isAscending);
        if (i < j)
        {
            Utils::swap(list[i], list[j]);
        }
    }
    //postThresholdSwap(i, j, high, list);
    if (i >= j)
    {
        Utils::swap(list[high], list[i]); // LEP
    }
    return makePartitionResult(low, high, i, list, isAscending); // LEP
}
#include "QuickSortManager.h"


void QuickSortManager::sort(int low, int high, std::vector<int> &list, Variants variant, Order order)
{

    bool isAscending = order == Order::Asc ? true : false;
    BasePartition *selectedPartition = this->variantsMap[variant];
    BasePartition::PartitionResult partitionResult = selectedPartition->partition(low, high, list, isAscending);
    // count++;
    int newHigh, newLow;
    if (selectedPartition == &lepPartition)
    {
        newHigh = partitionResult.left - 1;
        newLow = partitionResult.right;
    }

    if (partitionResult.left > -1)
    {
        sort(low, newHigh, list, variant, order); // LEP
    }
    if (partitionResult.right > -1)
    {
        sort(newLow, high, list, variant, order); // LEP
    }                                             // else if(selectedPartition == &fepPartition){

    //} else if(selectedPartition == &mepPartition){

    //}
}

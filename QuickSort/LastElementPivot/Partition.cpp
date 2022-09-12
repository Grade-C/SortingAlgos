#include "Partition.h"

BasePartition::PartitionResult LEP::Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    std::cout << "Last Element Partition\n"; 
    int pivot = list[high]; // LEP
    int i = low;            // LEP
    int j = high - 1;
    
    while (i < j) // LEP // Temporarily keeping. need to check whether it works with FEP
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
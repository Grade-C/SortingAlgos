#include "Partition.h"

BasePartition::PartitionResult FEP::Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    //std::cout << "First Element Pivot\n"; 
    int pivot = list[low]; // FEP
    int i = low + 1;            // FEP
    int j = high; //FEP
    /* std::cout << "Pivot : "<< pivot <<"\n"; 
    std::cout << "PivotIdx : "<< low <<"\n"; 
    std::cout << "low : "<< low <<"\n"; 
    std::cout << "high : "<< high <<"\n"; 
    std::cout << "i : "<< i <<"\n"; 
    std::cout << "j : "<< j <<"\n";  */

    
    while (i <= j) // FEP // Temporarily keeping. need to check whether it works with FEP
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
        Utils::swap(list[low], list[j]); // FEP
    }
    Utils::printVector(list);
    return makePartitionResult(low, high, j, list, isAscending); // LEP
}
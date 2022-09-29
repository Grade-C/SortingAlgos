#include "Partition.h"
//#include <cmath>

void MOTP::Partition::updateListValues(int index, std::vector<int> &list, std::pair <int, int> pairElem){
    if(index != pairElem.first){
        list[index] = pairElem.second;
    }
}
std::pair<int, int> MOTP::Partition::findPivot(const int low, const int high, std::vector<int> &list, bool isAscending)
{
    int mid = (int)ceil((low + high) / 2);
    std::map<int, int> threeElems = {{low, list[low]}, {mid, list[mid]}, {high, list[high]}};
    std::pair<int, int> smallest(INFINITY, INFINITY);
    std::pair<int, int> largest(NEG_INFINITY, NEG_INFINITY);
    std::pair<int, int> median(0, 0);
    std::pair<int, int> pivotPair;

    int mid = 0;
    for (auto elem : threeElems)
    {
        // if (isAscending)
        //{
        if (elem.second < smallest.second)
        {
            median = smallest;
            // median.first = smallest.first;
            // median.second = smallest.second;
            smallest = elem;
            // smallest.first = elem.first;
            // smallest.second = elem.second;
        }
        if (elem.second > largest.second)
        {
            median = largest;
            largest = elem;
        }
        //}else{

        //}
    }
    if(isAscending){
        updateListValues(low, list, smallest);
        updateListValues(mid, list, median);
        updateListValues(high, list, largest);
        Utils::swap(list[mid], list[high-1]);
        pivotPair.first = high-1;
        pivotPair.second = list[high-1];
    }else{
        updateListValues(low, list, largest);
        updateListValues(mid, list, median);
        updateListValues(high, list, smallest);
        Utils::swap(list[mid], list[low+1]);
        pivotPair.first = low+1;
        pivotPair.second = list[low+1];
    }

    return pivotPair;
}

BasePartition::PartitionResult MOTP::Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    // std::cout << "First Element Pivot\n";
    std::pair<int, int> pivotpair = findPivot(low, high, list, isAscending); // MOTP
    int pivotIndex = pivotpair.first;
    int pivot = pivotpair.second;
    int i = isAscending? low : high;       // MOTP
    int j = isAscending? high-1 : low+1;          // MOTP
    /* std::cout << "Pivot : "<< pivot <<"\n";
    std::cout << "PivotIdx : "<< low <<"\n";
    std::cout << "low : "<< low <<"\n";
    std::cout << "high : "<< high <<"\n";
    std::cout << "i : "<< i <<"\n";
    std::cout << "j : "<< j <<"\n";  */

    while (i <= j) // FEP // Temporarily keeping. need to check whether it works with MOTP
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
        Utils::swap(list[pivotIndex], list[i]); // FEP
    }
    Utils::printVector(list);
    return makePartitionResult(low, high, i, list, isAscending); // LEP
}
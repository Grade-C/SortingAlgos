#include "QuickSort.h"

void QuickSort::modifyList(std::vector<int> &list)
{
    list.push_back(this->INFINITY);
}

void QuickSort::sort(int low, int high, std::vector<int> &list)
{
    PartitionResult partitionResult = this->partition(low, high, list);
    std::cout<< "left :"<<partitionResult.left << " right: " << partitionResult.right << "\n";
    if (partitionResult.left > -1)
    {
        sort(low, partitionResult.left, list);
    }
    if (partitionResult.right >-1)
    {
        sort(partitionResult.right + 1, high, list);
    }
}

void QuickSort::sort(std::vector<int> &input, Order order)
{
    modifyList(input);
    std::cout<<"Modded : ";
    Utils::printVector(input);
    sort(0, input.size() - 1, input);
    Utils::printVector(input);
}

std::string QuickSort::getName()
{
    return "Quick Sort";
}

int main()
{

    QuickSort qs;
    std::vector<int> unsortedData = {13, 10, 11, 12, 4, 139, 25, 7, 56, 6, 8, 12, 3};
    Utils::printVector(unsortedData);
    qs.sort(unsortedData, qs.Asc);
    return 0;
}
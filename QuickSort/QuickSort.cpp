#include "QuickSort.h"

void QuickSort::modifyList(std::vector<int> &list, Order order)
{
    if (order == Order::Asc)
    {
        list.push_back(this->INFINITY);
    }
    else
    {
        list.push_back(this->NEG_INFINITY);
        //list.insert(list.begin(),this->INFINITY);
    }
}

void QuickSort::sort(int low, int high, std::vector<int> &list, Order order)
{
    bool isAscending = order == Asc ? true : false;
    PartitionResult partitionResult = this->partition(low, high, list, isAscending);
    //std::cout << "left :" << partitionResult.left << " right: " << partitionResult.right << "\n" << "List: ";
    Utils::printVector(list);
    if (partitionResult.left > -1)
    {
        sort(low, partitionResult.left, list, order);
    }
    if (partitionResult.right > -1)
    {
        sort(partitionResult.right + 1, high, list, order);
    }
}

void QuickSort::sort(std::vector<int> &input, Order order)
{
    modifyList(input, order);
    std::cout << "Modded : ";
    Utils::printVector(input);
    sort(0, input.size() - 1, input, order);
    Utils::printVector(input);
}

std::string QuickSort::getName()
{
    return "Quick Sort";
}

int main()
{

    QuickSort qs;
    std::vector<int> unsortedData = {13, 10, 11, 12, 4, 139, 139, 45, 45, 25,  7, 56, 6, 8, 10 , 34, 10, 12, 3, 45};
    Utils::printVector(unsortedData);
    qs.sort(unsortedData, qs.Asc);
    return 0;
}

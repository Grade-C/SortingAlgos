/* #include "PivotBasedSort.h"

void PivotBasedSort::sort(int low, int high, std::vector<int> &list, Order order)
{
    bool isAscending = order == Order::Asc ? true : false;
    PartitionResult partitionResult = this->partition(low, high, list, isAscending);
    if (partitionResult.left > -1)
    {
        sort(low, partitionResult.left - 1, list, order); // LEP
    }
    if (partitionResult.right > -1)
    {
        sort(partitionResult.right, high, list, order); // LEP
    }
}

void PivotBasedSort::sort(std::vector<int> &input, Order order)
{
    sort(0, input.size() - 1, input, order);
}

std::string PivotBasedSort::getName()
{
    return "Quick Sort - Last Element Pivot";
} */
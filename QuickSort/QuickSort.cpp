#include "QuickSort.h"

void QuickSort::sort(std::vector<int> &input, std::string varient , Order order){

}

void QuickSort::sort(int low, int high, std::vector<int> &list, Order order)
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

void QuickSort::sort(std::vector<int> &input, Order order)
{
    sort(0, input.size() - 1, input, order);
}

std::string QuickSort::getName()
{
    return "Quick Sort";
}

int main()
{

    QuickSort qs;
    std::vector<std::vector<int>> input;
    std::vector<int> unsortedData = {34, 1, 1, 13, 10, 11, -9, 12, 4, 1, -7, -9, 139, 139, 45, 45, 45, 25, 12, 7, 56, 6, 8, 45, 10, 45, 34, 10, 12, 3, 11, 45, -7, -9};
    input.push_back(unsortedData);
    unsortedData = {13, 10, 11, 4, 139, 25, 11, 7, 56, 6, 8, 12, 11, 3, 13, 11};
    input.push_back(unsortedData);
    unsortedData = {13, 10, 11, 4, 139, 25, 12, 3, 1, 13, 10};
    input.push_back(unsortedData);
    unsortedData = {1, 2, 3, 6, 6};
    input.push_back(unsortedData);
    unsortedData = {1, 2, 3, 4, 5, 6, 6, 7};
    input.push_back(unsortedData);
    unsortedData = {1, 3, 2, 14};
    input.push_back(unsortedData);
    for (auto elem : input)
    {
        std::cout << "Unsorted: ";
        Utils::printVector(elem);
        qs.sort(elem, qs.Des);
        std::cout << "Sorted: ";
        Utils::printVector(elem);
        std::cout<< "\n";
    }

    return 0;
}

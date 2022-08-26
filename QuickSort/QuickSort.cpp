#include "QuickSort.h"

void QuickSort::sort(std::vector<int> &input, Order order)
{
}

std::string QuickSort::getName()
{
    return "Quick Sort";
}

int QuickSort::partition(std::vector<int> list, int low, int high)
{
    int pivot = list[low]; // Pivoting the first value
    int greaterFinderIdx = low + 1;
    int smallerFinderIdx = high - 1;

    while (greaterFinderIdx < smallerFinderIdx)
    {
        while (list[greaterFinderIdx] <= pivot)
        {
            greaterFinderIdx++;
        }
        while (list[smallerFinderIdx] > pivot)
        {
            smallerFinderIdx--;
        }
        if (greaterFinderIdx < smallerFinderIdx)
        {
            Utils::swap(list[greaterFinderIdx], list[smallerFinderIdx]); // swaps the value at  greaterFinderIdx aka i with smallerFinderIdx aka j
        }
    }
    Utils::swap(list[low], list[smallerFinderIdx]); // swaps pivot with the value at smallerFinderIdx aka j

    int leftWindowSize = smallerFinderIdx - low;
    int rightWindowSize = high - smallerFinderIdx;

    PartitionResult partitionResult;

    if (leftWindowSize > 2)
    {
        partitionResult.left = smallerFinderIdx;
    }
    else if (leftWindowSize == 2 && list[smallerFinderIdx - 1] < list[smallerFinderIdx - 2])
    {
        Utils::swap(list[smallerFinderIdx - 1], list[smallerFinderIdx - 2]);
    }

    if (rightWindowSize > 3 || (rightWindowSize == 3 && list[high] < this->INFINITY))
    {
        partitionResult.right = smallerFinderIdx;
    }
    else if (((rightWindowSize == 3 && list[high] == this->INFINITY) || rightWindowSize == 2) && list[smallerFinderIdx + 1] > list[smallerFinderIdx + 2])
    {
        Utils::swap(list[smallerFinderIdx + 1], list[smallerFinderIdx + 2]);
    }
    return partitionResult;
}

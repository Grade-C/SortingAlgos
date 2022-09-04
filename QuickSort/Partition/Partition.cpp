#include "Partition.h"

Partition::Partition()
{
    // std::cout << "Inf: "<< this->INFINITY<< "\n";
    // PartitionResult partitionResult;
}

Partition::PartitionResult Partition::makePartitionResult(int low, int high, int j, std::vector<int> &list, bool isAscending)
{
    int leftWindowSize = j - low;
    int rightWindowSize = high - j;
    std::cout << "LOW  : " << low << " HIGH : " << high << " j: " << j << "\n";

    std::cout << "Left size : " << leftWindowSize << " LEFT val: " << list[j - 1] << "\n";
    std::cout << "Right size : " << rightWindowSize << " RIGHT val: " << list[j + 1] << "\n";
    // std::vector<int> v(v.begin()+low, v.begin()+high);
    // std::cout<< "Current List : ";
    // Utils::printVector(v );
    // std::cout<< "\n";

    PartitionResult partitionResult;

    if (leftWindowSize > 2)
    {
        std::cout << "LEFT many values "
                  << "\n";

        partitionResult.left = j;
    }
    else if (leftWindowSize == 2)
        std::cout << "LEFT 2 values "
                  << "\n";
    if ((isAscending && list[j - 1] < list[j - 2]) || (!isAscending && list[j - 1] > list[j - 2]))
    {
        Utils::swap(list[j - 1], list[j - 2]);
    }

    if (rightWindowSize > 3 || ((isAscending && rightWindowSize == 3 && list[high] < this->INFINITY) || (!isAscending && rightWindowSize == 3 && list[high] > this->NEG_INFINITY)))
    {
        std::cout << "RIGHT many values "
                  << "\n";

        partitionResult.right = j;
    }
    else if ((isAscending && ((rightWindowSize == 3 && list[high] == this->INFINITY) || rightWindowSize == 2) && list[j + 1] > list[j + 2]) || (!isAscending && ((rightWindowSize == 3 && list[high] == this->NEG_INFINITY) || rightWindowSize == 2) && list[j + 1] < list[j + 2]))
    {
        std::cout << "RIGHT 3/2 values "
                  << "\n";

        Utils::swap(list[j + 1], list[j + 2]);
    }
    return partitionResult;
}

Partition::PartitionResult Partition::partition(int low, int high, std::vector<int> &list, bool isAscending)
{
    int pivot = list[low]; // Pivoting the first value
    std::cout << "\n"
              << "pivot : " << pivot << "\n";

    int i = low + 1; // i = greaterFinderIdx (ASC) | smallerFinderIdx (DESC)
    // int j = high - 1; // j = smallerFinderIdx (ASC) | greaterFinderIdx (DESC)
    int j = high - 1; // j = smallerFinderIdx (ASC) | greaterFinderIdx (DESC)
    std::cout << "\n"
              << "i : " << i << " j : " << j << "\n";

    while (i < j)

    {
        std::cout << "Inside while \n";
        while ((isAscending && list[i] <= pivot) || (!isAscending && list[i] > pivot))
        {

            i++;
            std::cout << "i : " << i << "\n";
        }
        while ((isAscending && list[j] > pivot) || (!isAscending && list[j] <= pivot))
        {
            j--;
            std::cout << "j : " << j << " " << pivot << " " << list[j] << "\n";
        }
        if (i < j)
        {
            std::cout << "swapping i,j while i<j\n";
            Utils::swap(list[i], list[j]); // swaps the value at i with j
        }
    }
    std::cout << "swapping low,j while i>j\n";
    if (i > j)
    {
        Utils::swap(list[low], list[j]);
    }
    // swaps pivot with the value at j
    return makePartitionResult(low, high, j, list, isAscending);
}

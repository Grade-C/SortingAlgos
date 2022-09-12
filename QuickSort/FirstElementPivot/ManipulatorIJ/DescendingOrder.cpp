#include "DescendingOrder.h"
void DescendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] > pivot && i <= high) // FEP
    {
        i++;
    }
}

void DescendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] <= pivot && j > low) // FEP
    {
        j--;
    }
}

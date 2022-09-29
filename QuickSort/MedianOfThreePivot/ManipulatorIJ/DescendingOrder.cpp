#include "DescendingOrder.h"
void MOTP::DescendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] > pivot && i <= high) // NA
    {
        i++;
    }
}

void MOTP::DescendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] <= pivot && j > low+1) // MOTP
    {
        j--;
    }
}

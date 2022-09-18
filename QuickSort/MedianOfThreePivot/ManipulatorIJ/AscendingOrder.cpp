#include "AscendingOrder.h"

void MOTP::AscendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] <= pivot && i <= high) //FEP
    {
        i++;
    }
}

void MOTP::AscendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] > pivot && j > low)
    {
        j--;
    }
}

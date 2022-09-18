#include "AscendingOrder.h"
void AscendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] <= pivot && i <= high) //FEP
    {
        i++;
    }
}

void AscendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] > pivot && j > low)
    {
        j--;
    }
}

#include "AscendingOrder.h"
void AscendingOrder::increaseI(int &i, std::vector<int> list, int pivot)
{
    while (list[i] <= pivot)
    {
        i++;
    }
}

void AscendingOrder::decreaseJ(int &j, std::vector<int> list, int pivot)
{
    while (list[j] > pivot)
    {
        j--;
    }
}

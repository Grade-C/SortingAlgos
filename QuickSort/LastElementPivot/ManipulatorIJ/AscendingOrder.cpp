#include "AscendingOrder.h"
void LEP::AscendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] <= pivot && i < high)
    {
        i++;
    }
}

void LEP::AscendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] > pivot && j > low)
    {
        j--;
    }
}

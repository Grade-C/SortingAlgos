#include "Des.h"
void Des::increaseI(int &i, std::vector<int> list, int pivot)
{
    while (list[i] > pivot)
    {
        i++;
    }
}

void Des::decreaseJ(int &j, const int i, std::vector<int> list, int pivot)
{
    while (list[j] <= pivot && j >= i)
    {
        j--;
    }
}

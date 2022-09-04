#include "Asc.h"
void Asc::increaseI(int &i, std::vector<int> list, int pivot)
{
    while (list[i] <= pivot)
    {
        i++;
    }
}

void Asc::decreaseJ(int &j, std::vector<int> list, int pivot)
{
    while (list[j] > pivot)
    {
        j--;
    }
}

#include "AscendingOrder.h"
void AscendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot, const int j)
{
    while (list[i] <= pivot && i<high)
    {
        i++;
        std::cout<<"Ascending piv val :" << pivot << " list val: "<< list[i]<<" i->"<<i<<"\n";

    }
}

void AscendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot)
{
    while (list[j] > pivot && j>low)
    {
        j--;
        std::cout<<"Ascending j->"<<j<<"\n";
    }
}

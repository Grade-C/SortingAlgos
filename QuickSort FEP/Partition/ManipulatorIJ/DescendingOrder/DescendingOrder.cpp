#include "DescendingOrder.h"
void DescendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] > pivot && i < high)
    {
        i++;
    }
}

void DescendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot,const int i)
{
    while (list[j] <= pivot && j > low)
    {
        j--;
        std::cout << "piv value :"<< pivot << " j->"<<j<<"\n";
    }
}

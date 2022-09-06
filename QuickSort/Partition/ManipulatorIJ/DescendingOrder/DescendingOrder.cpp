#include "DescendingOrder.h"
void DescendingOrder::increaseI(int &i, std::vector<int> list, int pivot)
{
    while (list[i] > pivot)
    {
        i++;
    }
}

void DescendingOrder::decreaseJ(int &j, std::vector<int> list, int pivot,const int i)
{
    while (list[j] <= pivot && j >= i)
    {
        j--;
        std::cout << "piv value :"<< pivot << " j->"<<j<<"\n";
    }
}

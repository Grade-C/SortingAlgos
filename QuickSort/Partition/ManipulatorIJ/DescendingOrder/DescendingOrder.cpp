#include "DescendingOrder.h"
void DescendingOrder::increaseI(int &i, int high, std::vector<int> list, int pivot)
{
    while (list[i] >= pivot && i < high) //LEP
    {
        std::cout << "piv value :"<< pivot << " i->"<<i<<"\n";

        i++;
    }
}

void DescendingOrder::decreaseJ(int &j, int low, std::vector<int> list, int pivot,const int i)
{
    while (list[j] < pivot && j > low) // LEP
    {
        j--;
        std::cout << "piv value :"<< pivot << " j->"<<j<<"\n";
    }
}

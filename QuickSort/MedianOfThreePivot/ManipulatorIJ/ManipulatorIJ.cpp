#include "ManipulatorIJ.h"

void MOTP::ManipulatorIJ::increaseI(int &i, const int high, std::vector<int> list, int pivot)
{
    if (this->isAscending)
    {
        AscendingOrder::increaseI(i, high, list, pivot);
    }
    else
    {
        DescendingOrder::increaseI(i, high, list, pivot);
    }
}
void MOTP::ManipulatorIJ::increaseI(int &i, const int high, std::vector<int> list, int pivot, bool isAscending)
{
    this->isAscending = isAscending;
    increaseI(i, high, list, pivot);
}

void MOTP::ManipulatorIJ::decreaseJ(int &j, const int low, std::vector<int> list, int pivot)
{
    if (this->isAscending)
    {
        AscendingOrder::decreaseJ(j, low, list, pivot);
    }
    else
    {
        DescendingOrder::decreaseJ(j, low, list, pivot);
    }
}

void MOTP::ManipulatorIJ::decreaseJ(int &j, const int low, std::vector<int> list, int pivot, bool isAscending)
{
    this->isAscending = isAscending;
    decreaseJ(j, low, list, pivot);
}

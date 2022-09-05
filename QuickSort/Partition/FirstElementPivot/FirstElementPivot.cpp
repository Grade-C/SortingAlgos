#include "FirstElementPivot.h"

void FirstElementPivot::increaseI(int &i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::increaseI(i, list, pivot);
    }else{
        DescendingOrder::increaseI(i, list, pivot);
    }
}

void FirstElementPivot::decreaseJ(int &j, const int i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::decreaseJ(j, list, pivot);
    }else{
        DescendingOrder::decreaseJ(j, list, pivot, i);
    }
}

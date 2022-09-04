#include "LastElementPivot.h"

void LastElementPivot::increaseI(int &i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        Asc::increaseI(i, list, pivot);
    }else{
        Des::increaseI(i, list, pivot);
    }
}

void LastElementPivot::decreaseJ(int &j, const int i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        Asc::decreaseJ(j, list, pivot);
    }else{
        Des::decreaseJ(j, i, list, pivot);
    }
}

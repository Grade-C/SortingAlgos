#include "LastElementPivot.h"

void LastElementPivot::increaseI(int &i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        Asc::increaseI(i, list, pivot);
    }

}
void LastElementPivot::decreaseJ(int &j, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        Asc::decreaseJ(j, list, pivot);
    }

}

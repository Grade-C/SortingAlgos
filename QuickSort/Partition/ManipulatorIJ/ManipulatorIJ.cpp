#include "ManipulatorIJ.h"

void ManipulatorIJ::increaseI(int &i, const int j, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::increaseI(i, list, pivot, j);
    }else{
        DescendingOrder::increaseI(i, list, pivot);
    }
}

void ManipulatorIJ::decreaseJ(int &j, const int i, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::decreaseJ(j, list, pivot);
    }else{
        DescendingOrder::decreaseJ(j, list, pivot, i);
    }
}

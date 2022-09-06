#include "ManipulatorIJ.h"

void ManipulatorIJ::increaseI(int &i, const int j, const int high ,std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::increaseI(i, high, list, pivot, j);
    }else{
        DescendingOrder::increaseI(i, high, list, pivot);
    }
}

void ManipulatorIJ::decreaseJ(int &j, const int i, const int low, std::vector<int> list, int pivot, bool isAscending){
    if(isAscending){
        AscendingOrder::decreaseJ(j, low, list, pivot);
    }else{
        DescendingOrder::decreaseJ(j, low, list, pivot, i);
    }
}

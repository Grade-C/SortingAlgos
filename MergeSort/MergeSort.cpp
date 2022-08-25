#include "MergeSort.h"


void MergeSort::sort(std::vector<int> &input, Order order)
{
    bool isAscending = order == Asc ? true : false;
    std::vector <std::vector <int>> result = this->split(input, isAscending);
    input = this->merge(result, isAscending);
}

std::string MergeSort::getName(){
    return "Merge Sort";
}

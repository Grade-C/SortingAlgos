#include "MergeSort.h"


void MergeSort::sort(std::vector<int> &input, Order order)
{
    std::vector <std::vector <int>> result = this->split(input);
    Utils::printVector(result);
}

std::string MergeSort::getName(){
    return "Merge Sort";
}

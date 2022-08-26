#include "QuickSort.h"

void QuickSort::modifyList(std::vector<int> &list){
    list.push_back(this->INFINITY);
}

void QuickSort::sort(int low, int high, std::vector<int> &list)
{
    PartitionResult partitionResult = this->partition(low, high, list);
    if(partitionResult.left != NULL){
        sort(low, partitionResult.left, list);
    }
    if(partitionResult.right != NULL){
        sort(partitionResult.right+1, high , list);
    }
}

void QuickSort::sort(std::vector<int> &input, Order order){
    modifyList(input);
    sort(0, input.size()-1, input);
}

std::string QuickSort::getName()
{
    return "Quick Sort";
}
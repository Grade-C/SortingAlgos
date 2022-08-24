#include "BubbleSort/BubbleSort.h"
#include "InsertionSort/InsertionSort.h"
#include "SelectionSort/SelectionSort.h"
#include "MergeSort/MergeSort.h"

//std::vector<int> unsortedData = {13, 45, 67, 67, 110, 112, 167, 232, 289, 295};
std::vector<int> unsortedData = {13, 10, 11, 12, 4, 139, 25, 7, 56, 6, 8, 12, 3};

int main()
{
    BubbleSort bubbleSort;
    InsertionSort insertionSort;
    SelectionSort selectionSort;
    MergeSort mergeSort;
    
    std::vector<Sort *> sortingAlgos = {&bubbleSort, &insertionSort, &selectionSort, &mergeSort};

    for (int i = 0; i < sortingAlgos.size(); i++)
    {
        std::vector<int> temp = unsortedData;
        std::cout <<"Algorithm : "<<sortingAlgos[i]->getName()<<"\n"<<"Unsorted: "<<"\t";
        Utils::printVector(temp);
        sortingAlgos[i]->sort(temp, sortingAlgos[i]->Des);
        std::cout << "Sorted : "<<"\t";
        Utils::printVector(temp);
        temp.clear();
    }
    return 0;
}
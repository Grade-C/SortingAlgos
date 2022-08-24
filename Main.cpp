#include "BubbleSort/BubbleSort.h"
#include "InsertionSort/InsertionSort.h"
#include "SelectionSort/SelectionSort.h"
#include "MergeSort/MergeSort.h"

std::vector<int> unsortedData = {13, 45, 67, 67, 112, 110, 167, 232, 289, 295};

/* std::ostream& operator <<(std::ostream& output, std::vector <int> vec){
    for(auto elem : vec){
        output<< elem <<"\t";
    }
    output << "\n";
    return output;
} */

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
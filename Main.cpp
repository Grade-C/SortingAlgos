#include "BubbleSort/BubbleSort.h"
#include "InsertionSort/InsertionSort.h"
#include "SelectionSort/SelectionSort.h"

std::vector<int> unsortedData = {13, 45, 67, 67, 112, 167, 232, 289, 295};

std::ostream& operator <<(std::ostream& output, std::vector <int> vec){
    for(auto elem : vec){
        output<< elem <<"\t";
    }
    output << "\n";
    return output;
}

int main()
{
    BubbleSort bubbleSort;
    InsertionSort insertionSort;
    SelectionSort selectionSort;
    
    std::vector<Sort *> sortingAlgos = {&bubbleSort, &insertionSort, &selectionSort};

    for (int i = 0; i < sortingAlgos.size(); i++)
    {
        std::vector<int> temp = unsortedData;
        std::cout <<"Algorithm : "<<sortingAlgos[i]->getName()<<"\n"<<"Unsorted: "<<"\t"<<temp;
        sortingAlgos[i]->sort(temp, sortingAlgos[i]->Des);
        std::cout << "Sorted : "<<"\t"<<temp;
        temp.clear();
    }
    return 0;
}
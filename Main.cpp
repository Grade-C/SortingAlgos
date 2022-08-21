#include <iostream>
#include <vector>
#include "BubbleSort/BubbleSort.h"
#include "InsertionSort/InsertionSort.h"

int main()
{
    std::vector<int> v = {13, 45, 67, 34, 12, 56, 2, 67, 32, 89, 45};
    InsertionSort::sort(v);
    for (auto e : v)
    {
        std::cout << e << "\t";
    }
    std::cout<<"\n";

    return 0;
}
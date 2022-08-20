#include <iostream>
#include <vector>
#include "BubbleSort/BubbleSort.h"

int main()
{
    std::vector<int> v = {13, 45, 67, 34, 12, 56, 2};
    BubbleSort::sort(v);
    for (auto e : v)
    {
        std::cout << e << "\t";
    }

    return 0;
}
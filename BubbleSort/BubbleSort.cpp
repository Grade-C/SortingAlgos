#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "../Utils/Utils.h"

void BubbleSort::sort(std::vector<int> &input)
{
    bool swappable = true;
    while (swappable)
    {
        swappable = false;
        for (int i = 0; i < input.size() - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                Utils::swap(input[i], input[i+1]);
                swappable = true;
            }
        }
    }
}

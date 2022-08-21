#include <iostream>
#include <vector>
#include "InsertionSort.h"
#include "../Utils/Utils.h"

void InsertionSort::sort(std::vector<int> &input)
{
    bool swappable = false;
    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i] > input[i + 1])
        {
            Utils::swap(input[i], input[i + 1]);
            swappable = true;
            int currentPos = i;
            while (swappable)
            {
                if (currentPos - 1 >= 0 && input[currentPos] < input[currentPos - 1])
                {
                    Utils::swap(input[currentPos], input[currentPos - 1]);
                    currentPos--;
                }
                else
                {
                    swappable = false;
                }
            }
        }
    }
    //}
}

#include "SelectionSort.h"


void SelectionSort::sort(std::vector<int> &input, Order order)
{
    int currentMin, currentMinIdx;
    bool swappable = false;
    for (int i = 0; i < input.size() - 1; i++)
    {
        increaseOuterLoop();
        currentMin = input[i];
        currentMinIdx = i;
        for (int j = i + 1; j < input.size(); j++)
        {
            increaseInnerLoop();
            if (j < input.size() &&
                ((order == Asc && input[j] < currentMin && input[j] < input[j + 1]) ||
                 (order == Des && input[j] > currentMin && input[j] > input[j + 1])))
            {
                currentMin = input[j];
                currentMinIdx = j;
            }
        }
        Utils::swap(input[i], input[currentMinIdx]);
    }
    showReport();
}

std::string SelectionSort::getName(){
    return "Selection Sort";
}

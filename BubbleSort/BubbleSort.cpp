#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int> &input, Order order)
{
    bool swappable = true;
    while (swappable)
    {
        increaseOuterLoop();
        swappable = false;
        for (int i = 0; i < input.size() - 1; i++)
        {
            increaseInnerLoop();
            if ((order == Asc && input[i] > input[i + 1]) || (order == Des && input[i] < input[i + 1]))
            {
                Utils::swap(input[i], input[i+1]);
                swappable = true;
            }
        }
    }
    showReport();
}

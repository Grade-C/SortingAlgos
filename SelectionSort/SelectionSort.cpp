#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int> &input, Order order)
{
    bool swappable = false;
    for (int i = 0; i < input.size() - 1; i++)
    {
        increaseOuterLoop();
        startTime();
        if ((order == Asc && input[i] > input[i + 1]) || (order == Des && input[i] < input[i + 1]))
        {
            Utils::swap(input[i], input[i + 1]);
            swappable = true;
            int currentPos = i;
            while (swappable)
            {
                increaseInnerLoop();
                if (currentPos - 1 >= 0 &&
                    ((order == Asc && input[currentPos] < input[currentPos - 1]) ||
                     (order == Des && input[currentPos] > input[currentPos - 1])))
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
    endTime();
    showReport();
}

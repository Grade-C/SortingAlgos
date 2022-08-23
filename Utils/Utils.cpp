#include "Utils.h"

// Function Definations
Utils::Minimum Utils::findMinValue(std::vector<int> vec)
{
    Minimum min;
    min.value = vec[0];
    min.index = 0;

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] < min.value)
        {
            min.value = vec[i];
            min.index = i;
        }
    }
    return min;
}

std::ostream &operator<<(std::ostream &output, std::vector<int> intVector)
{
    for (int i = 0; i < intVector.size(); i++)
    {
        output << intVector[i];
        if (i < intVector.size() - 1)
        {
            output << ", ";
        }
    }
    output << "\n";
    return output;
}

void Utils::printVector(std::vector<int> vector)
{
    std::cout << vector;
}

void Utils::printVector(std::vector<std::vector<int>> vector)
{
    for (auto elem : vector)
    {
        std::cout << elem;
    }
}

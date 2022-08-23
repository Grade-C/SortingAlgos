#include "Recursion.h"
#include <math.h>

void Recursion::_recursionOrPush(std::vector<int> list)
{
    if (list.size() > 1)
    {
        _recursion(list);
    }
    else
    {
        this->rResult.push_back(list);
    }
}

void Recursion::_recursion(std::vector<int> list)
{
    if (list.size() < 1)
    {
        std::cout << "Splitting can not be done on a non-existent collection";
        return;
    }
    if (list.size() == 1)
    {
        this->rResult.push_back(list);
        return;
    }
    int left = 0;
    int right = list.size() - 1;
    int mid = ceil((left + right) / 2.0); // Must be a double division to handle fractional values

    std::vector<int> leftBlock(list.begin(), list.begin() + mid); // subvector of first half of the list
    _recursionOrPush(leftBlock);
    std::vector<int> rightBlock(list.begin() + mid, list.end()); // subvector of last half of the list
    _recursionOrPush(rightBlock);
}

std::vector<std::vector<int>> Recursion::recursion(std::vector<int> list)
{
    _recursion(list);
    return this->rResult;
}
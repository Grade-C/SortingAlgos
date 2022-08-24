#include "Split.h"

std::vector<std::vector<int>> Split::split(std::vector<int> &list, bool isAscending)
{
    return this->iteration(list, true, isAscending);
}
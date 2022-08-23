#include "Split.h"

std::vector<std::vector<int>> Split::split(std::vector<int> &list)
{
    return this->iteration(list, true);
}
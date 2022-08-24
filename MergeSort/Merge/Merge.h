#ifndef MERGE_H
#define MERGE_H
#include <iostream>
#include <vector>
#include "../../Utils/Utils.h"
class Merge
{
private:
    std::vector<int> twoWay(std::vector<int> list1, std::vector<int> list2);

public:
    std::vector<int> merge(std::vector<std::vector<int>> lists);
};
#endif
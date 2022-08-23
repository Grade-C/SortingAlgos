#include "Recursion.h"
#include <math.h>

int count = 0;

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
    count++;
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
    std::cout << "Count " << count << std::endl;
    return this->rResult;
}

// int main()
// {
//     Split split;
//     // std::vector <int> l1 = {2,5,8,12,45};
//     // std::vector<int> l2 = {1, 3, 4, 8, 34, 67, 89, 78, 41};
//     std::vector<int> l2 = {};
//     // std::vector<std::vector<int>> res = split.recursion(l2);
//     std::vector<std::vector<int>> res = split.loop(l2);
//     std::cout << split.result.size() << "\n";
//     // std::vector<int> v(l2.begin(), l2.begin()+1);
//     // std::vector<int> v2(l2.begin()+1, l2.end());
//     // std::cout << v.size() << "\n";
//     for (auto e : res)
//     {
//         std::cout << "e: "<< e[0] << "\t";
//     }
//     /*
//     for (auto e : v2)
//     {
//         std::cout << e << "\t";
//     } */
//     return 0;
// }
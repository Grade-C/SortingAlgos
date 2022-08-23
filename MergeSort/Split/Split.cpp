#include "Split.h"
#include <math.h>

// std::vector<std::vector<int>> Split::singleElement(std::vector<int>& list){
void Split::singleElement(std::vector<int> &list)
{
    int iterations = ceil(log2(list.size())); // #iterations for a list of size n = log2(n)
    int i = 0;
    std::vector<std::vector<int>> resultList;
    while (i < iterations)
    {
        if (resultList.size())
        {
        }
        else
        {
            // std
        }

        i++;
    }
    std::cout << iterations << "\n";
}

int count = 0;

void Split::makeListAndPush(int elem, std::vector<int> elemList)
{
    elemList = {elem};
    this->result.push_back(elemList);
}

std::vector<std::vector<int>> Split::loop(std::vector<int> list)
{
    std::vector<int> elemList;
    if (list.size() < 1) // base case for empty vector
    {
        //std::cout << "Splitting can not be done on a non-existent collection";
        return this->result;
    }
    if (list.size() == 1) // base case for vector with size = 1 
    {
        makeListAndPush(list[0], elemList);
        return this->result;
    }

    makeListAndPush(list[0], elemList); // initial base case for vector with size > 1 to minimize 1 iteration
    for (int i = 1; i < list.size(); i++) 
    {
        count++;
        makeListAndPush(list[i], elemList); // Regular case
        if (i == list.size() - 2)
        {
            makeListAndPush(list[list.size()-1], elemList); // Terminating case to minimize 1 iteration
            break;
        }
    }
    std::cout << "Count " << count << std::endl;
    return this->result;
}

void Split::_recursionOrPush(std::vector<int> list)
{
    if (list.size() > 1)
    {
        _recursion(list);
    }
    else
    {
        this->result.push_back(list);
    }
}

void Split::_recursion(std::vector<int> list)
{
    if (list.size() < 1)
    {
        std::cout << "Splitting can not be done on a non-existent collection";
        return;
    }
    if (list.size() == 1)
    {
        this->result.push_back(list);
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

std::vector<std::vector<int>> Split::recursion(std::vector<int> list)
{
    _recursion(list);
    std::cout << "Count " << count << std::endl;
    return this->result;
}

int main()
{
    Split split;
    // std::vector <int> l1 = {2,5,8,12,45};
    // std::vector<int> l2 = {1, 3, 4, 8, 34, 67, 89, 78, 41};
    std::vector<int> l2 = {};
    // std::vector<std::vector<int>> res = split.recursion(l2);
    std::vector<std::vector<int>> res = split.loop(l2);
    std::cout << split.result.size() << "\n";
    // std::vector<int> v(l2.begin(), l2.begin()+1);
    // std::vector<int> v2(l2.begin()+1, l2.end());
    // std::cout << v.size() << "\n";
    for (auto e : res)
    {
        std::cout << "e: "<< e[0] << "\t";
    }
    /*
    for (auto e : v2)
    {
        std::cout << e << "\t";
    } */
    return 0;
}
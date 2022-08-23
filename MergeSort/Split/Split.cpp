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


int main()
{
    Split split;
    // std::vector <int> l1 = {2,5,8,12,45};
    // std::vector<int> l2 = {1, 3, 4, 8, 34, 67, 89, 78, 41};
    std::vector<int> l2 = { };
    // std::vector<std::vector<int>> res = split.recursion(l2);
    std::vector<std::vector<int>> res = split.iteration(l2);
    std::cout << "iteration Size :" << res.size() << "\n";
    for (auto e : res)
    {
        std::cout << "e: "<< e[0] << "\t";
    }
    std::cout<< "\n";

    res = split.recursion(l2);
    std::cout << "Recusrion Size :" <<res.size() << "\n";
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
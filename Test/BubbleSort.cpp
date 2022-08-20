#include <iostream>
#include <string>
#include <vector>
#include "BubbleSort.h"
#include "Swep.h"

BubbleSort::BubbleSort()
{
    std::cout << "Bubblesort created" << std::endl;
}
// std::vector<int>
void BubbleSort::sort(std::vector<int> &input)
{
    bool swappable = true;

    //Swap s;
    //Swap swap;
    int a=34;
    int b=21;
    //swap.swap(a,b);
    while (swappable)
    {
        swappable = false;
        for (int i = 0; i < input.size() - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                //s.swap(input[i], input[i + 1]);
                // swap(input[i], input[i+1]);
                // swappable = true;
            }
        }
    }
}

// int main()
// {
//     std::vector<int> v = {13, 45, 67, 34, 12, 56, 2};
//     /* int a = 13;
//     int b = 43; */
//     // std::cout<<v[1]<<"\t"<<v[2]<<std::endl;
//     // bool x = swap(v[1], v[2]);
//     // std::cout<< std::boolalpha << x << "\n" <<v[1]<<"\t"<<v[2]<<std::endl;
//     BubbleSort b;
//     b.sort(v);
//     // sort(v);
//     for (auto e : v)
//     {
//         std::cout << e << "\t";
//     }

//     return 0;
// }

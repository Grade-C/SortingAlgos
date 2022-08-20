#include <vector>
#include <iostream>
#include "Swep.h"
#include "BubbleSort.h"

int main()
{
    std::vector<int> v = {13, 45, 67, 34, 12, 56, 2};
    BubbleSort b;
    Swep s;
    b.sort(v);
    s.swep(v[2],v[3]);
    s.doNothing();
    /* int a = 13;
    int b = 43; */
    // std::cout<<v[1]<<"\t"<<v[2]<<std::endl;
    // bool x = swap(v[1], v[2]);
    // std::cout<< std::boolalpha << x << "\n" <<v[1]<<"\t"<<v[2]<<std::endl;
    //BubbleSort b;
    //b.sort(v);
    // sort(v);
    for (auto e : v)
    {
        std::cout << e << "\t";
    }

    return 0;
}
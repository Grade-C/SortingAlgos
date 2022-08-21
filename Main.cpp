#include "BubbleSort/BubbleSort.h"
#include "InsertionSort/InsertionSort.h"

int main()
{
    //std::vector<int> v = {13, 45, 67, 34, 12, 56, 2, 67, 32, 89, 45};
    std::vector<int> vec = {13, 45, 67, 67,  112, 167, 232, 289, 295 };
    std::vector<int> v = vec;
    InsertionSort is;
    for (auto e : v)
    {
        std::cout << e << "\t";
    }
    std::cout<<"\n";
    is.sort(v, is.Des);
    for (auto e : v)
    {
        std::cout << e << "\t";
    }
    std::cout<<"\n";

    v = vec;
    for (auto e : v)
    {
        std::cout << e << "\t";
    }
    std::cout<<"\n";
    BubbleSort bs;
    bs.sort(v, bs.Des);
    for (auto e : v)
    {
        std::cout << e << "\t";
    }
    std::cout<<"\n";

    return 0;
}
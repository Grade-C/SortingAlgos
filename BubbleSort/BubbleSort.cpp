#include <iostream>
#include <string>
#include <vector>

template <typename T>
bool swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = a;
    return true;
}

int main()
{
    std::vector<int> v = {13, 45, 67};
    int a = 13;
    int b = 43;
    std::cout<<v[1]<<"\t"<<v[2]<<std::endl;
    bool x = swap(v[1], v[2]);
    std::cout<< std::boolalpha << x << "\n" <<v[1]<<"\t"<<v[2]<<std::endl;

    return 0;
}
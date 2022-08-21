#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <vector>
class Utils
{
    private:
    //
public:
    template <typename T>
    static void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    };
    struct MinValueInfo {
        int minVal;
        int minValIdx;
    };
    MinValueInfo findMinValue(std::vector<int>);
    int findMinValueIndex(std::vector<int>);
};
#endif
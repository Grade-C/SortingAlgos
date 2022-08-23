#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <vector>
class Utils
{
public:
    template <typename T>
    static void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    };
    struct Minimum
    {
        int value;
        int index;
    };
    Minimum findMinValue(std::vector<int>);
    friend std::ostream &operator<<(std::ostream &, std::vector<int>);
    static void printVector(std::vector<int>);
    static void printVector(std::vector<std::vector<int>>);
};
#endif
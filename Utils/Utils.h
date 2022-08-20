#ifndef UTILS_H
#define UTILS_H
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
};
#endif
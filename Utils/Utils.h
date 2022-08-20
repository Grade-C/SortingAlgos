#ifndef SWAP_H
#define SWAP_H
class Swap
{
public:
    Swap();
    template <typename T> static void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    //return true;
};
};
#endif
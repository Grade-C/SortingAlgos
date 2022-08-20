#ifndef SWAP_H
#define SWAP_H
class Swep
{
public:
    Swep();
    template <typename T>
    void swep(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
        // return true;
    };
    void doNothing();
};
#endif
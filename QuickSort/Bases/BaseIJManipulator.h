#ifndef QS_BASEIJMANIPULATOR_H
#define QS_BASEIJMANIPULATOR_H
#include <iostream>
#include <vector>
class BaseIJManipulator
{
    public:
    BaseIJManipulator();
    virtual ~BaseIJManipulator();
protected:
    virtual void increaseI(int &i, const int high, std::vector <int> list, int pivot) = 0 ;
    virtual void decreaseJ(int &j, const int low, std::vector <int> list, int pivot) = 0;
};
#endif
#ifndef QS_PARTITION_ABSTRACTIJ_H
#define QS_PARTITION_ABSTRACTIJ_H
#include <iostream>
#include <vector>
class AbstractIJ
{
    public:
    AbstractIJ();
    virtual ~AbstractIJ();
protected:
    virtual void increaseI(int &i, const int high, std::vector <int> list, int pivot) = 0 ;
    virtual void decreaseJ(int &j, const int low, std::vector <int> list, int pivot) = 0;
};
#endif
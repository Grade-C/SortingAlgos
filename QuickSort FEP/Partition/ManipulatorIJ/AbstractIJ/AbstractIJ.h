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
    virtual void increaseI(int &i, int high, std::vector <int> list, int pivot, const int j =0) = 0 ;
    virtual void decreaseJ(int &j, int low, std::vector <int> list, int pivot, const int i=0) = 0;
};
#endif
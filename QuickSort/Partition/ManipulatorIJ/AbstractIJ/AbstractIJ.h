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
    virtual void increaseI(int &i, std::vector <int> list, int pivot, const int j =0) = 0 ;
    virtual void decreaseJ(int &j,std::vector <int> list, int pivot, const int i=0) = 0;
};
#endif
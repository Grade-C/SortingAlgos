#ifndef QS_PARTITION_FIRST_ELEMENT_PIVOT_MANIPULATORIJ_H
#define QS_PARTITION_FIRST_ELEMENT_PIVOT_MANIPULATORIJ_H
#include <iostream>
#include <vector>
class ManipulatorIJ
{
    public:
    ManipulatorIJ();
    virtual ~ManipulatorIJ();
protected:
    virtual void increaseI(int &i, std::vector <int> list, int pivot) = 0 ;
    virtual void decreaseJ(int &j,std::vector <int> list, int pivot, const int i=0) = 0;
};
#endif
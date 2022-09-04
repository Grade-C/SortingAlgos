#ifndef QS_PARTITION_LAST_ELEMENT_PIVOT_INTERFACE_H
#define QS_PARTITION_LAST_ELEMENT_PIVOT_INTERFACE_H
#include <iostream>
#include <vector>
class Interface
{
private:
    /* data */

protected:
    virtual void increaseI(int &i, std::vector <int> list, int pivot);
    virtual void decreaseJ(int &j, std::vector <int> list, int pivot);
};
#endif
#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include "../Sort/Sort.h"
#include "./Partition/Partition.h"
#include <map>
//#include "./LastElementPivot/"

class QuickSort : public Sort, public Partition
{
private:
    void sort(int low, int high, std::vector<int> &list, Order order);
    void modifyList(std::vector<int> &list, Order order);

public:

enum Variants
    {
        FEP,
        LEP,
        MEP
    };
    Variants var;
    std::map <Variants, std::string> variantsMap = {{FEP , "FirstElementPivot"},{LEP , "LastElementPivot"}, {MEP , "MedianElementPivot"} };
    void sort(std::vector<int> &input, Order order);
    void sort(std::vector<int> &input, Variants variant , Order order);
    std::string getName();
};
#endif
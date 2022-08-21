#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <vector>
#include "../Utils/Utils.h"
#include "../Report/Report.h"

class Sort : public Report 
{
public:
    enum Order
    {
        Asc,
        Des
    };

    virtual void sort(std::vector<int> &input, Order order);
    virtual std::string getName();
};
#endif
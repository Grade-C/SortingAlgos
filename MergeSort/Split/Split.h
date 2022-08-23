#ifndef SPLIT_H
#define SPLIT_H
#include <iostream>
#include <vector>
#include "./Iteration/Iteration.h"
#include "./Recursion/Recursion.h"

class Split : public Iteration, public Recursion
{
private:
    

public:
    std::vector<std::vector<int>> result = {};
    // std::vector<std::vector<int>> singleElement(std::vector<int>&);
    void singleElement(std::vector<int> &);
    std::vector<std::vector<int>> twoElements(std::vector<int> &);
};
#endif
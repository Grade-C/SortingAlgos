#ifndef SPLIT_H
#define SPLIT_H
#include "./Iteration/Iteration.h"
#include "./Recursion/Recursion.h"
class Split : public Iteration, public Recursion
{
public:
    std::vector<std::vector<int>> split(std::vector<int> &);
};
#endif
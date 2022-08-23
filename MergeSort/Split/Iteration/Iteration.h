#ifndef SPLIT_ITERATION_H
#define SPLIT_ITERATION_H
#include <iostream>
#include <vector>

class Split
{
private:
    void makeListAndPush(int, std::vector <int> elemList = {});

public:
    std::vector<std::vector<int>> iResult = {};
    std::vector<std::vector<int>> iteration(std::vector<int>);
};
#endif
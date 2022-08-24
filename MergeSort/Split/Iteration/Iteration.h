#ifndef SPLIT_ITERATION_H
#define SPLIT_ITERATION_H
#include <iostream>
#include <vector>

class Iteration
{
private:
    std::vector<std::vector<int>> iResult = {};
    void pushToResult(int, std::vector<int> elemList = {});
    void pushToResult(std::vector<int>);
    void processMuliSizeList(std::vector<int>, bool isAscending);
    void processSingleSizeList(std::vector<int>, std::vector<int>);

protected:
    std::vector<std::vector<int>> iteration(std::vector<int>, bool, bool isAscending);
};
#endif
#include "Iteration.h"

void Iteration::pushToResult(int elem, std::vector<int> elemList)
{
    elemList = {elem};
    this->iResult.push_back(elemList);
}

void Iteration::pushToResult(std::vector<int> elemList)
{
    this->iResult.push_back(elemList);
}

void Iteration::processMuliSizeList(std::vector<int> list, bool isAscending)
{
    int start = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if ((i + 1 == list.size()) || ( isAscending &&(list[i] > list[i + 1])) || ( !isAscending &&(list[i] < list[i + 1])))
        {
            int length = i - start + 1;
            std::vector<int> subVector(list.begin() + start, list.begin() + i + 1);
            pushToResult(subVector);
            start = i + 1;
        }
    }
}

void Iteration::processSingleSizeList(std::vector<int> list, std::vector<int> elemList)
{
    pushToResult(list[0], elemList); // initial base case for vector with size > 1 to minimize 1 iteration
    for (int i = 1; i < list.size(); i++)
    {
        pushToResult(list[i], elemList); // Regular case
        if (i == list.size() - 2)
        {
            pushToResult(list[list.size() - 1], elemList); // Terminating case to minimize 1 iteration
            break;
        }
    }
}

std::vector<std::vector<int>> Iteration::iteration(std::vector<int> list, bool isMultiSizeList, bool isAscending)
{
    std::vector<int> elemList;

    if (list.size() == 1) // base case for vector with size = 1
    {
        pushToResult(list[0], elemList);
        return this->iResult;
    }

    if (isMultiSizeList)
    {
        processMuliSizeList(list, isAscending);
    }
    else
    {
        processSingleSizeList(list, elemList);
    }
    return this->iResult;
}
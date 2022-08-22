#ifndef SPLIT_H
#define SPLIT_H
#include <iostream>
#include <vector>

class Split
{
private:
    void _recursion(std::vector<int>);
    void _recursionOrPush(std::vector<int>);
    void makeListAndPush(int, std::vector <int> elemList = {});

public:
    std::vector<std::vector<int>> result = {};
    // std::vector<std::vector<int>> singleElement(std::vector<int>&);
    void singleElement(std::vector<int> &);
    std::vector<std::vector<int>> recursion(std::vector<int>);
    std::vector<std::vector<int>> loop(std::vector<int>);
    std::vector<std::vector<int>> twoElements(std::vector<int> &);
};
#endif
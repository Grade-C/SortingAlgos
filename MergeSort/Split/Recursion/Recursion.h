#ifndef SPLIT_RECURSION_H
#define SPLIT_RECURSION_H
#include <iostream>
#include <vector>

class Recursion
{
private:
    std::vector<std::vector<int>> rResult = {};
    void _recursion(std::vector<int>);
    void _recursionOrPush(std::vector<int>);

protected:
    std::vector<std::vector<int>> recursion(std::vector<int>);
};
#endif
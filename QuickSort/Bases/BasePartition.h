#ifndef QS_BASEPARTITION_H
#define QS_BASEPARTITION_H
#include <iostream>
#include <vector>
#include <limits>
#include "../../Utils/Utils.h"
class BasePartition
{
public:
    BasePartition();
    virtual ~BasePartition();
    struct PartitionResult
    {
        int left = -1;
        int right = -1;
    };
    virtual PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending) = 0;


protected:
    int INFINITY = std::numeric_limits<int>::max();
    int NEG_INFINITY = std::numeric_limits<int>::min();
    
    //virtual PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending) = 0;
    //virtual void initializeData(int &i, int &j, int &pivot, const std::vector<int> list, const int high, const int low) = 0; // pure function. Requires overriding
    //virtual void preThresholdSwap(int &i, int &j, const int pivot, std::vector<int> &list, const int high, const int low, const bool isAscending) = 0;
    //virtual void postThresholdSwap(const int i, const int j, const int pivotFinalIdx, std::vector<int> &list) = 0;
    PartitionResult makePartitionResult(const int low, const int high, const int newPivotIdx, std::vector<int> &list, const bool isAscending);
};
#endif
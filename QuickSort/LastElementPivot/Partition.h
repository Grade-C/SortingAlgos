#ifndef QS_LEP_PARTITION_H
#define QS_LEP_PARTITION_H
#include "../Bases/BasePartition.h"
#include "./ManipulatorIJ/ManipulatorIJ.h"

namespace LEP
{
    class Partition : public ManipulatorIJ, public BasePartition
    {
    private:
        // void initializeData(int &i, int &j, int &pivot, const std::vector<int> list, const int high, const int low);
        // void preThresholdSwap(int &i, int &j, const int pivot, std::vector<int> &list, const int high, const int low, const bool isAscending);
        // void postThresholdSwap(const int i, const int j, const int pivotFinalIdx, std::vector<int> &list);

    public:
        PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending);
    };

}

#endif
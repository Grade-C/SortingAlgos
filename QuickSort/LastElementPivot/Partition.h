#ifndef QS_LEP_PARTITION_H
#define QS_LEP_PARTITION_H
#include "../Bases/BasePartition.h"
#include "./ManipulatorIJ/ManipulatorIJ.h"

namespace LEP
{
    class Partition : public ManipulatorIJ, public BasePartition
    {
    public:
        PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending);
    };

}

#endif
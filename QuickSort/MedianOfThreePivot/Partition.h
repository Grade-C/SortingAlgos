#ifndef QS_FEP_PARTITION_H
#define QS_FEP_PARTITION_H
#include "../Bases/BasePartition.h"
#include "./ManipulatorIJ/ManipulatorIJ.h"

namespace FEP
{
    class Partition : public ManipulatorIJ, public BasePartition
    {
    public:
        PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending);

    private:
        int findPivot(const int low, const int high, std::vector<int> &list);
    };

}

#endif
#ifndef QS_MOTP_PARTITION_H
#define QS_MOTP_PARTITION_H
#include "../Bases/BasePartition.h"
#include "./ManipulatorIJ/ManipulatorIJ.h"
#include <math.h>
#include <map>

namespace MOTP
{
    class Partition : public ManipulatorIJ, public BasePartition
    {
    public:
        PartitionResult partition(const int low, const int high, std::vector<int> &list, const bool isAscending);

    private:
        int findPivot(const int low, const int high, std::vector<int> &list, bool isAscending);
    };

}

#endif
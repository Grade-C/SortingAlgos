/* #ifndef QUICK_SORT_LEP_H
#define QUICK_SORT_LEP_H
#include "../../Sort/Sort.h"
#include "../Partition/Partition.h"

class PivotBasedSort : public Sort, public Partition
{
private:
    void sort(int low, int high, std::vector<int> &list, Order order);

public:
    std::string PivotBasedSort::getName();

protected:
    void sort(std::vector<int> &input, Order order);
};
#endif
 */
#include "Merge.h"

std::vector<int> Merge::twoWay(std::vector<int> list1, std::vector<int> list2, bool isAscending)
{
    int i = 0;
    int j = 0;
    std::vector<int> result;
    int elem;

    while (i < list1.size() && j < list2.size())
    { // Comparision push
        if ((isAscending && list1[i] < list2[j]) || (!isAscending && list1[i] > list2[j]))
        {
            elem = list1[i];
            i++;
        }
        else
        {
            elem = list2[j];
            j++;
        }
        result.push_back(elem);
    }

    for (; i < list1.size(); i++)
    { // Remaining push
        result.push_back(list1[i]);
    }
    for (; j < list2.size(); j++)
    {
        result.push_back(list2[j]);
    }
    return result;
}

std::vector<int> Merge::merge(std::vector<std::vector<int>> lists, bool isAscending)
{
    std::vector<int> result = {};
    if (!lists.size()) // Base case for no lists
    {
        return result;
    }
    if (lists.size() == 1) // Base case for only one list
    {
        result = lists[0];
        return result;
    }

    while (lists.size() > 1)
    {
        for (int i = 0; i < lists.size(); i++)
        {
            if (i + 1 == lists.size()) // Base case to ignore unpaired lists
            {
                continue;
            }
            lists[i] = this->twoWay(lists[i], lists[i + 1], isAscending); // Merges two lists and replace the first list by the merged list
            lists.erase(lists.begin() + i + 1); // Removes the second list from the vector
        }
    }

    return lists[0]; // Returns only the first element since all lists had been already merged into one list.
}

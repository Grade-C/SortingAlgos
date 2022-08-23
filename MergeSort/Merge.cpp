#include "Merge.h"

std::vector<int> Merge::twoWay(std::vector<int>& list1 , std::vector<int>& list2){
    int i = 0;
    int j = 0;
    std::vector<int> result ;
    int elem;

    while(i<list1.size() && j<list2.size()){ // Comparision push
        if(list1[i] < list2[j]){
            elem = list1[i];
            i++;
        }else{
            elem = list2[j];
            j++;
        }
        result.push_back(elem);
    }

    for(;i<list1.size();i++){ // Remaining push
        result.push_back(list1[i]);
    }
    for(;j<list2.size();j++){
        result.push_back(list2[j]);
    }
    return result;
}


int main(){
    Merge m;
    std::vector <int> l1 = {2,5,8,12,45};
    std::vector <int> l2 = {1,3,4,8,34,67,89};
    std::vector <int> l3 = m.twoWay(l1, l2);
    for(auto e:l3){
        std::cout<< "e: " << e << "\t";
    }
    return 0;
}
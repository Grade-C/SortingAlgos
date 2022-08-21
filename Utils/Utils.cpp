#include "Utils.h"

//Function Definations
Utils::Minimum Utils::findMinValue(std::vector<int> vec){
    Minimum min;
    min.value = vec[0];
    min.index = 0;
    
    for(int i=1; i<vec.size(); i++){
        if(vec[i] < min.value){
            min.value = vec[i];
            min.index = i;
        }
    }
    return min;
}

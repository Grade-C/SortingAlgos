#include "Utils.h"

//Function Definations
Utils::MinValueInfo Utils::findMinValue(std::vector<int> vec){
    MinValueInfo minValInfo;
    minValInfo.minVal = vec[0];
    minValInfo.minValIdx = 0;
    
    for(int i=1; i<vec.size(); i++){
        if(vec[i] < minValInfo.minVal){
            minValInfo.minVal = vec[i];
            minValInfo.minValIdx = i;
        }
    }
    return minValInfo;
}

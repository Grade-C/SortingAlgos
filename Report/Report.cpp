#include "Report.h"

Report::Report(){

}

void Report::increaseInnerLoop(){
    this->innerLoop++;
}

void Report::increaseOuterLoop(){
    this->outerLoop++;
}

void Report::showReport(){
    std::cout<<"Outer loops : "<<this->outerLoop<<"\n"<<"Inner loops : "<<this->innerLoop<< "\n"; 
}
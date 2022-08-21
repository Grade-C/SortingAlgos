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
    std::cout<<"Outer loops : "<<this->outerLoop<<"\n"<<"Inner loops : "<<this->innerLoop<< "\n" << "Time : " << this->totalTime << "\n"; 
}

void Report::startTime(){
    this->start = clock()*1000;
}

void Report::endTime(){
    this->end = clock()*1000;
    this->totalTime += this->end - this->start; 
}
#include "Report.h"

Report::Report(){
    this->innerLoop=0;
    this->outerLoop=0;
    this->totalLoop=0;
}

void Report::increaseInnerLoop(){
    this->innerLoop++;
}

void Report::increaseOuterLoop(){
    this->outerLoop++;
}

void Report::showReport(){
    //std::cout<<"Outer loops : "<<this->outerLoop<<"\t"<<"Inner loops : "<<this->innerLoop<< "\t" << "Time : " << this->totalTime << "\t"<<"Total Loops : "<<this->totalLoop<<"\n"; 
    //std::cout<<"Total Loops : "<<this->innerLoop+this->outerLoop<<"\n"; 
}

void Report::startTime(){
    this->start = clock()*1000;
}

void Report::endTime(){
    this->end = clock()*1000;
    this->totalTime += this->end - this->start; 
}
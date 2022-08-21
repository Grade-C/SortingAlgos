#ifndef REPORT_H
#define REPORT_H
#include <iostream>
#include <vector>
#include "../Utils/Utils.h"
#include <time.h>

class Report
{
private:
    int innerLoop;
    int outerLoop;
    clock_t start, end;
    double totalTime = 0;

public:
    Report();
    void increaseInnerLoop();
    void increaseOuterLoop();
    void showReport();
    void startTime();
    void endTime();
};
#endif

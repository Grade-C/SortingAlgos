#ifndef REPORT_H
#define REPORT_H
#include <iostream>
#include <vector>
#include "../Utils/Utils.h"

class Report
{
private:
    int innerLoop;
    int outerLoop;

public:
    Report();
    void increaseInnerLoop();
    void increaseOuterLoop();
    void showReport();
};
#endif

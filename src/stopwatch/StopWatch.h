#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <string>
#include <iostream>
using namespace std;

class StopWatch 
{

public:

    StopWatch();
    // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
    double getProcessTime();
    // starts timer
    void startTimer();
    // stops timer
    void endTimer();
    // displays time
    void displayTime();
    // resets timer
    void resetTimer();

private:

double startTime;
double endTime;

};

#endif

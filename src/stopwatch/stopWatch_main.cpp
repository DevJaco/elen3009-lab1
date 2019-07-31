// Exercising the Screen class
#include "StopWatch.h"
#include <iostream>

using namespace std;

int main()
{
    auto myStopWatch = StopWatch();
    myStopWatch.startTimer();
    for(int i = 0; i < 1000000; i++)
    {
    }
    myStopWatch.endTimer();
    myStopWatch.displayTime();
    
    myStopWatch.resetTimer();
    
    myStopWatch.startTimer();
    for(int i = 0; i < 1000000; i++)
    {
    }
    myStopWatch.endTimer();
    myStopWatch.displayTime();
}
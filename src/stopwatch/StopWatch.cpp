#include "StopWatch.h"
#include <ctime>
using namespace std;

StopWatch::StopWatch(){};
// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
double StopWatch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

void StopWatch::startTimer()
{
    startTime = getProcessTime();
}

void StopWatch::endTimer()
{
    endTime = getProcessTime();
}

void StopWatch::displayTime()
{
        cout << endTime - startTime << endl;
}

void StopWatch::resetTimer()
{
    startTime = 0;
    endTime = 0;
}
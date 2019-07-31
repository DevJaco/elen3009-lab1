// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
    // proof that it works
    myScreen.display();
    cout << endl;
	myScreen.emptySquare(2,2,3);
    myScreen.display();
	return 0;
    
}

/* Exercise 4.6
A 2D array is a more intuitive internal representation that can be used 
without having to change the existing public interface. It is more 
more understandable to think of a grid-screen as a 2 dimensional array.

This would not change the class interface only the class implementation.
It is important not to change the class interface as all existing clients
of the class would be impacted if the interface is changed. However, we 
are free to change the implementation as long as function parameters 
remain the same. 
*/ 
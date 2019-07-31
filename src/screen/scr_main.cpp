// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
    
    // proof that it works
	myScreen.move(6,1);
    myScreen.down();
    myScreen.set('k');
    myScreen.up();
    myScreen.set('k');
    myScreen.display();
 
    
	return 0;
}


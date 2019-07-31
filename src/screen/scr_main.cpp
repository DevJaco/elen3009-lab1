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


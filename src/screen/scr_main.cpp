// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	
	
	
	for(int i = 0; i < 6; i++){
		myScreen.set('*');
		if(i != 5) myScreen.down();
	}
	
	myScreen.move(1,2);
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.back();
	myScreen.down();
	myScreen.set('*');
	myScreen.back();
	myScreen.down();
	myScreen.set('*');
	myScreen.back();
	myScreen.set('*');
	
	myScreen.display();
	
	return 0;
}


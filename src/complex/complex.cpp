// complex.cpp
// Multiplying complex numbers
// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
	using comp = complex<float>;
	int a, b, c; // use uniform initialisation syntax (curly braces)
	bool again = false;
do {
	printf ("Enter the value for a: ");
	scanf ("%d",&a);
	printf ("Enter the value for b: ");
	scanf ("%d",&b);
	printf ("Enter the value for c: ");
    scanf ("%d",&c);
	
	

	comp x1 = (float(-b) +  sqrt(std::complex<float>(b*b - 4*a*c, 0))) / float(2*a); // type deduced for 'answer' is: complex<float> if delta is negative
	comp x2 = (float(-b) - sqrt(std::complex<float>(b*b - 4*a*c, 0))) / float(2*a); // type deduced for 'answer' is: complex<float> if delta is negative

	cout << "The first root is: " << x1.real() << " + " << x1.imag() << "j"<< endl;
	cout << "The second root is: " <<  x2.real() << " + " << x2.imag() << "j"<< endl;;

	//answer++; 
	//This doesn't work because the postfix ++ operator is not defined for the complex type
	
	printf ("Do you want to do another calculation? Enter 1 for yes and 0 for no ");
    scanf ("%d",&again);
}
while(again);
	return 0;
}


#include <iostream>
void main()
{
	int a1 = 17;
	int b1 = 11;
	int c1 = 47;
	int d1 = 59;

	bool res = !(a1 || b1) >= (!(c1 == d1)); //false


	double a = 34.5;
	double b = 34.5;
	int c = 43;
	int d = 56;

	res = !(a || b) >= (!(c == d)); //false
	std::cout<<res;
}
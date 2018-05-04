#include <cassert>
#include <iostream>

double c(double);
bool err(double, double, double);

int main () {
	double er = 0.01;
	assert (err(-17.77,c(0),er));
	std::cout << c (0);
	std::cout << err ( c(0),-17.77,er);
}

double c(double a){return (a-32)*5.0/9.0;}
bool err (double a, double b, double er){return (a-er) <= b and b <=(a+er) ;}
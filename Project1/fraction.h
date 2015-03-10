#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class fraction
{
public:
	// constructors
	fraction();
	//overload constructor
	//accessor functions
	double getnum1() const;
	double getnum2() const;

	//mutator functions
	void setnum1(double, double);
	void setnum2(double, double);
	void add();
	void subtract();
	void multiply();
	void divide();
	void printnum();
	void print();

private:
	//member variables that only exist in sub class
	double num1, num2, result;
};

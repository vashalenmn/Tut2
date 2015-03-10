#include <iostream>
#include <string>
#include <cmath>
#include "fraction.h"
using namespace std;


int main()
{
	int ans = 5;
	double numer1, denom1, numer2, denom2;

	//allow user to enter numerator and denominator
	cout << "enter first numbers numerator ";
	cin >> numer1;
	cout << "enter first number denominator ";
	cin >> denom1;
	cout << "enter second numbers numerator ";
	cin >> numer2;
	cout << "enter second number denominator ";
	cin >> denom2;
	fraction frac;
	while (ans != 0)								// check if response is invalid
	{
		cout << "enter 1 to add; 2 to subtract; 3 to multiply; 4 to divide   and 0 to EXIT" << endl;
		cin >> ans;

		if (ans == 1)							//check if addition
		{
			frac.setnum1(numer1, denom1);
			frac.setnum2(numer2, denom2);
			frac.add();
			frac.printnum();
			frac.print();
			system("Pause");
		}
		if (ans == 2)							//check if subtraction
		{
			frac.setnum1(numer1, denom1);
			frac.setnum2(numer2, denom2);
			frac.subtract();
			frac.printnum();
			frac.print();
			system("Pause");
		}
		if (ans == 3)							//check if multiplication
		{
			frac.setnum1(numer1, denom1);
			frac.setnum2(numer2, denom2);
			frac.multiply();
			frac.printnum();
			frac.print();
			system("Pause");
		}
		if (ans == 4)							//check if division
		{
			frac.setnum1(numer1, denom1);
			frac.setnum2(numer2, denom2);
			frac.divide();
			frac.printnum();
			frac.print();
			system("Pause");
		}
	}
	return 0;
}

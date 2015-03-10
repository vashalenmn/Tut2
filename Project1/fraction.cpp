#include "fraction.h"

fraction::fraction()
{
	//put variables for initialization here
	num1 = 0.0;
	num2 = 0.0;
	result = 0.0;

}
double fraction::getnum1() const
{
	return num1;
}
double fraction::getnum2() const
{
	return num2;
}
void fraction::setnum1(double nm1, double nm2)		//combine numerator and denominator into a single num
{
	num1 = nm1 / nm2;
}
void fraction::setnum2(double nm1, double nm2)		//combine numerator and denominator into a single num
{
	num2 = nm1 / nm2;
}
void fraction::add()								//add input numbers
{
	result = num1 + num2;
}
void fraction::subtract()							//add input numbers
{
	result = num1 - num2;
}
void fraction::multiply()							//multiply input numbers
{
	result = num1*num2;
}
void fraction::divide()								//divide input numbers
{
	result = num1 / num2;
}
void fraction::printnum()							//print initial numbers for calculation
{
	cout << "number1 is " << num1 << " And number2 is " << num2 << endl;
}
void fraction::print()							// print answer in fraction form
{
	cout << "the answer is " << result << endl;
	int denomen, spare, count = 1;
	int numerat = 0;
	denomen = 1;
	while (result != 0 && count < 6)				//method that makes fraction
	{
		result = result * 10;
		numerat *= 10;
		numerat += (int)result;
		spare = (int)result;
		denomen *= 10;
		result = result - spare;
		count++;
	}												//formating of fraction
	cout << "the answer in fraction form is " << endl;
	cout << numerat << endl;
	cout << "------" << endl;
	cout << denomen << endl;
}
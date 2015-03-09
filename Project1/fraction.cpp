#include <iostream>
#include <string>
#include <cmath>
using namespace std;

	double getnum1(double nm1, double nm2)			//combine numerator and denominator into a single num
	{
		double x;
		x = nm1 / nm2;
		return x;
	}
	double getnum2(double nm1, double nm2)			//combine numerator and denominator into a single num
	{
		double x;
		x = nm1 / nm2;
		return x;
	}
	double add(double nm1, double nm2)				//add input numbers
	{
		double x;
		x = nm1 + nm2;
		return x;
	}
	double subtract(double nm1, double nm2)			//subtract input numbers
	{
		double x;
		x = nm1 - nm2;
		return x;
	}
	double multiply(double nm1, double nm2)			//multiply input numbers
	{
		double x;
		x = nm1 * nm2;
		return x;
	}
	double divide(double nm1, double nm2)			//divide input numbers
	{
		double x;
		x = nm1 / nm2;
		return x;
	}
	void printnumb(double num1, double num2)		//print initial numbers for calculation
	{
		cout << "number1 is " << num1 << " And number2 is " << num2 << endl;
	}
	void print(double result)						// print answer in fraction form
	{
		cout << "the answer is " << result << endl;
		int denomen, spare, count = 1;
		int numerat = 0;
		denomen = 1;
		while (result != 0 && count < 6)			//method that makes fraction
		{
			result = result * 10;
			numerat *= 10;
			numerat += (int)result;
			spare = (int)result;
			denomen *= 10;
			result = result - spare;
			count++;
		}											//formating of fraction
		cout << "the answer in fraction form is " << endl;
		cout << numerat << endl;
		cout << "------" << endl;
		cout << denomen << endl;
	}

int main()
	{
		int ans = 5;
		double num1, num2, result;
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

		while (ans != 0)								// check if response is invalid
		{
			cout << "enter 1 to add; 2 to subtract; 3 to multiply; 4 to divide   and 0 to EXIT" << endl;
			cin >> ans;

			if (denom1 != 0 && denom2 != 0)				//check if undefined
			{
				if (ans == 1)							//check if addition
				{
					num1 = getnum1(numer1, denom1);
					num2 = getnum2(numer2, denom2);
					result = add(num1, num2);
					printnumb(num1, num2);
					print(result);
					system("Pause");
				}
				if (ans == 2)							//check if subtraction
				{
					num1 = getnum1(numer1, denom1);
					num2 = getnum2(numer2, denom2);
					result = subtract(num1, num2);
					print(result);
					system("Pause");
				}
				if (ans == 3)							//check if multiplication
				{
					num1 = getnum1(numer1, denom1);
					num2 = getnum2(numer2, denom2);
					result = multiply(num1, num2);
					print(result);
					system("Pause");
				}
				if (ans == 4)							//check if division
				{
					num1 = getnum1(numer1, denom1);
					num2 = getnum2(numer2, denom2);
					result = divide(num1, num2);
					print(result);
					system("Pause");
				}
			}

		}
		return 0;
	}

#include <iostream>		
using namespace std;

int main()
{
	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	// Логічні оператори: > < >= <= != ==

	double result = 7 + 7.8;
	bool isBigger = 10 > 5;
	cout << "10 > 5: " << isBigger << endl;

	// Логічний блок if:
	// if (expression)
	// {
	//	  body (code)
	// }

	if (isBigger)
	{
		cout << "Bigger!\n";
	}

	if (5 >= 5)
	{
		cout << "True\n";
	}

	// при перетворенні числа до bool: 0 - false, все інше - true
	if (-5)
	{
		cout << "True\n";
	}
	else
	{
		cout << "False\n";
	}

	// Завдання: визначення чи є прямокутник квадратом
	cout << "Enter the sides of the rectangle...\n";

	float a = 0, b = 0;
	cout << "Enter width: "; cin >> a;
	cout << "Enter height: "; cin >> b;

	// оператор if else
	if (a == b) 
	{
		cout << "This rectangle is a square!" << endl;
	}
	else
	{
		cout << "This rectangle is not a square!" << endl;
	}

	// Завдання: визначити чи входить число в діапзон 20...50
	int number = 0;
	cout << "Enter a number: "; cin >> number;

	/*if (number >= 20)
	{
		if (number <= 50)
		{
			cout << "Number is in the range!\n";
		}
		else
		{
			cout << "Number is out of the range!\n";
		}
	}
	else
	{
		cout << "Number is out of the range!\n";
	}*/

	// Оператори для комбінації логічних умов: && - 'і', || - 'або'

	// Логічне 'і'
	if (number >= 20 && number <= 50)
		cout << "Number is in the range!\n";
	else
		cout << "Number is out of the range!\n";

	// Логічне 'або'
	if (number % 3 == 0 || number % 7 == 0)
		cout << "Number is multiple of 3 or 7\n";

	return 0;
}
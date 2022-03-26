#include <iostream>		
using namespace std;	

int main()
{
	cout << "Square of the rectangle: 420cm^2" << endl;

	// Арифметичні оператори: + - * / %

	cout << "Result (5+2): " << 5 + 2 << endl;
	cout << "Result (5-2): " << 5 - 2 << endl;
	cout << "Result (5/2): " << 5.0F / 2 << endl;
	cout << "Result (5*2): " << 5 * 2 << endl;
	cout << "Result (5%2): " << 5 % 2 << endl;

	cout << "Square of the rectangle: " << 10.2 * 7 << "cm^2" << endl;

	// Змінні - комірка в пам'яті, яка дозволяє зберігати певне значення для подального користування
	
	// Створення змінної:
	// type name;

	// int - тип цілих чисел (від -2,147,483,648 до 2,147,483,647) розміром 4 байти

	int width;		// не ініціалізована змінна, яка містить "мусор" (поганий приклад написання)
	int height = 2; // створення з ініціалізацією

	width = 22; // присвоєння значення
	width = 33; // присвоєння значення

	cout << "Square of the rectangle: " << width * height << "cm^2" << endl;

	cout << "Enter width: "; cin >> width;
	cout << "Enter height: "; cin >> height;

	cout << "Square of the rectangle: " << width * height << "cm^2" << endl;

	// Завдання: конвертація градусів F до C
	float degree = 0;
	cout << "Enter degree (°F): ";
	cin >> degree;

	float celsius = (degree - 32) * (5.0 / 9);
	cout << "Degree (°C): " << celsius << "°C\n";


	// Логічні оператори: > < >= <= != ==
	
	// Логічний блок if:
	// if (expression)
	// {
	//	  body (code)
	// }

	if (5 >= 5) 
	{
		cout << "True\n";
	}

	// Завдання: визначення чи є прямокутник квадратом
	cout << "Enter the sides of the rectangle...\n";

	float a = 0, b = 0;
	cout << "Enter width: "; cin >> a;
	cout << "Enter height: "; cin >> b;

	if (a == b)
	{
		cout << "This rectangle is a square!" << endl;
	}
	else
	{
		cout << "This rectangle is not a square!" << endl;
	}

	system("pause"); // пауза, для продовження потрібно натиснути будь-яку клавішу
	return 0;
}
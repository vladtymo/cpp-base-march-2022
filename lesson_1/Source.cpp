#include <iostream>		// бібліотека яка містить об'єкти вводу/виводу

//using namespace std;	// використання всіх об'єктів з простору імен
using std::cout;		// використання конкретного об'єкту з простору імен
using std::endl;

int main()
{
	// [Ctrl + F5] - запусе програми
	// [Alt + Up/Down Arrow] - переміщення коду вниз/вверх
	
	// явне вказання простору імен
	std::cout << "Hello world!";
	// без вказання простору імен
	cout << "Hello world!";

	/* Escape послідовності:
		* \n - новий рядок
		* \t - символ табуляції
		* \\ - \
		* \" - "
		* \' - '
		* \r - повернення курсора на початок поточного рядка
	*/

	cout << "\n";
	cout << endl;

	cout << "First Line.\nSecond Line." << endl << "Continue..." << endl;

	cout << "Red\n\tGreen\n\t\tBlue\n";
	cout << "\"Quote\"";

	cout << "Hello, \\nine\\";

	return 0; // завершення функції та повернення результату (0 - без помилок)
}
#include <iostream>		
using namespace std;

int main()
{
	// Завдання: користувач вводить оцінку, вивести її опис
	short mark = 0;
	cout << "Enter a mark: ";
	cin >> mark;

	// ієрархічна структура if else if...
	if (mark == 5) cout << "Excellent!\n";
	else if (mark == 4) cout << "Good!\n";
	else if (mark == 3) cout << "Normal!\n";
	else if (mark == 2) cout << "Bad!\n";
	else if (mark == 1) cout << "Very bad!\n";
	else cout << "Invalid mark!\n";

	// switch - оператор множинного вибору
	switch (mark)
	{
		// case - варіант значення змінної
	case 5:
		cout << "Excellent!\n";
		break; // вихід з блоку switch
	case 4:
		cout << "Good!\n";
		break;
	case 3:
		cout << "Normal!\n";
		break;
	case 2:
		cout << "Bad!\n";
		break;
	case 1:
		cout << "Very bad!\n";
		break;
	}

	cout << "Finish!";

	// Завдання: користувач вводить номер місяця, вивести назву його пори року
	short month = 0;
	cout << "Enter a month (1-12): ";
	cin >> month;

	switch (month)
	{
	case 1:
	case 2:
	case 12: cout << "Winter"; break;

	case 3:
	case 4:
	case 5: cout << "Spring"; break;

	case 6:
	case 7:
	case 8: cout << "Summer"; break;

	case 9: 
	case 10:
	case 11: cout << "Autumn"; break;

		// виконується якщо жодний case не спрацював
	default: cout << "Invalid month!"; break;
	}
	
	// Завдання: Створити додаток для конвертації валюти. 
	// Користувач вводить кількість валюти в гривнях та вибирає валюту,
	// в яку бажає виконати конвертацію.
	// Використати switch при перевірці значення.

	return 0;
}
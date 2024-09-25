#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float number, sum = 0;
	cout << "¬водите числа сколько душе угодно (0 дл€ завершени€): " << endl;
	
	do {
		cin >> number;
		sum += number;
	} while (number != 0);

	cout << "—умма всех чисел: " << sum << endl;

return 0;
}
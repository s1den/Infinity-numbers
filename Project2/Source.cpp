#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float number, sum = 0;
	cout << "������� ����� ������� ���� ������ (0 ��� ����������): " << endl;
	
	do {
		cin >> number;
		sum += number;
	} while (number != 0);

	cout << "����� ���� �����: " << sum << endl;

return 0;
}
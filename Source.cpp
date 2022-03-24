// ������������ ������ ������� C++

#include <iostream>
#include "functions.h" // ��, ��� �� ���������� ����� ������� - �������� ����������. ����� ���������� � main() � � ����� ����� ���������.
#include "structures.h"
#include "data.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������ � functions.h
	/*cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 50, 101);
	cout << "����������� ������:\n";
	showArr(arr, 10); */

	// ������ � structures.h
	/*person Tom = {"Tom Smith", {1, 1, 1970}, "director", 120000};
	showObj(Tom);*/

	X = 10;
	cout << "X = " << X << endl;
	Y = 15;
	cout << "Y = " << Y << endl;

	cout << _PI << endl;

	fillMX();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << MX[i][j] << "\t";
		cout << endl;
	}

	return 0;
}
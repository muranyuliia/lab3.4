// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y >= sqrt(pow(x, 2) - pow(y, 2)) > 0 >=x)) ||
		(y =< sqrt(pow(x, 2) - pow(y, 2)) >= x < 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
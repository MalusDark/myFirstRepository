#include <iostream>

using namespace std;

void input(int*, int*);
//Данная программа является учебной
int main()
{
	setlocale(LC_ALL, "rus");
	
	int num1, num2;
	
	input(&num1, &num2);
	cout << "Числа: " << num1 << "; " << num2 << endl;

	cout << "Сумма введенных чисел: " << num1 + num2 << endl;

	return 0;
}

void input(int *a, int *b)
{
	count << "Введите первое число ";
	cin >> *a;
	
	cout << "Введите второе число ";
	cin >> *b;
}
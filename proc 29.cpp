

#include "pch.h"
#include <iostream>
using namespace std;
int DigitCount(int K);

int main()
{
	setlocale(LC_ALL, "rus");
    /*Описать функцию DigitCount(K) целого типа, находящую количество
цифр целого положительного числа K. Используя эту функцию, найти ко-
личество цифр для каждого из пяти данных целых положительных чисел.*/
	int A,i;
	for (int i = 1; i <= 5; i++)
	{
		cout << "число ";
		cin >> A;
		cout << "Число состоит из " << DigitCount(A) << "чисел" << endl;
	}
}
int DigitCount(int K)
{
	int i=1;
	for (; K >= 10; i++)
	{
		K = K / 10;
	}
		return i;
}

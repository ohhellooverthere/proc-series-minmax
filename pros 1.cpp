
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
void PowerA3(double *pA, double *pB) {
	*pB = pow(*pA, 3);
	cout << *pB << endl;
}


int main()
{
	setlocale(LC_ALL, "rus");

	/*Описать процедуру PowerA3(A, B), вычисляющую третью степень числа
A и возвращающую ее в переменной B (A — входной, B — выходной пара-
метр; оба параметра являются вещественными). С помощью этой процеду-
ры найти третьи степени пяти данных чисел.*/
	for (int i = 1; i <= 5; i++) {
		double A, B;
		cout << "A=";
		cin >> A;
		cout << "третий степень числа " << A << "=";
		PowerA3(&A, &B);
		cout << endl;
	}
}

/*Описать процедуру ShiftLeft3(A, B, C), выполняющую левый цикличе-
ский сдвиг: значение A переходит в C, значение C — в B, значение B — в A
(A, B, C — вещественные параметры, являющиеся одновременно входны-
ми и выходными). С помощью этой процедуры выполнить левый цикличе-
ский сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2,
B2, C2).*/
#include "pch.h"
#include <iostream>
using namespace std;
void ShiftLeft3(int *pA, int *pB, int  *pC);


int main()
{
	setlocale(LC_ALL, "rus");
	
	int A1, A2, B1, B2, C1, C2;
	cout << "A1=";
	cin >> A1;
	cout << "B1=";
	cin >> B1;
	cout << "C1=";
	cin >> C1;
	cout << "A2=";
	cin >> A2;
	cout << "B2=";
	cin >> B2;
	cout << "C2=";
	cin >> C2;

	ShiftLeft3(&A1, &B1, &C1);
	cout << A1 << " " << B1 << " " << C1 << endl;
	ShiftLeft3(&A2, &B2, &C2);
	cout << A2 << " " << B2 << " " << C2 << endl;

}

void ShiftLeft3(int *pA, int *pB, int  *pC)
{
	int a, b, c;
	a = *pA;
	b = *pB;
	c = *pC;
	*pC = a;
	*pB = c;
	*pA = b;

}




// series 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
   /*Дано целое число N (> 1) и набор из N вещественных чисел. Если
данный набор образует убывающую последовательность, то вывести 0;
в противном случае вывести номер первого числа, нарушающего
закономерность.*/

	int N, i, r,r1 ;
	cout << "N=";
	cin >> N;
	cout << "введите " << N << " целых чисел" << endl;
	if (N > 1) {


		for (i = 1; i <= N; ++i, r1=r) {


			cout << "число ";
			cin >> r;
			if (i != 1) {
				if (r1 < r) {
					cout << "0";
				}
				else  {
					cout << r;
				}
			}

		}
	}
	else
		cout << "error";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

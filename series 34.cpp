// series 34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*Даны целые числа K, N, а также K наборов целых чисел по N элемен-
тов в каждом наборе. Для каждого набора выполнить следующее действие:

если в наборе содержится число 2, то вывести сумму его элементов; если в
наборе нет двоек, то вывести 0.*/
	int K, N ;
	int i;//количество элементов в наборе
	int b;//количество наборов
	int r;//переменная куда записывать числа из набора 
	int s=0;//переменная куда записывать сумму
	int t = 0;//проверяет нужно ли считать сумму, если 1- нужно,0-нет
	cout << "K=";
	cin >> K;
	cout << "N=";
	cin >> N;
	for (b = 1; b <= K; b++,t=0, s=0) {
		for (i = 1; i <= N; i++) {
			cout << "Число " << i << "=";
			cin >> r;
			cout << endl;
			s += r;
			if ((r == 2) && (t == 0)){
				t = 1;
			}
			
		}
		if (t == 1)
				cout << "сумма всех элемментов этого набора равна "<< s << endl;
			else if (t == 0)
				cout << "0"<<endl;
	}
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

// Series 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*Дано целое число N и набор из N целых чисел. Если в наборе имеют-
ся положительные числа, то вывести True; в противном случае вывести

False.*/
	int N,i,r,b=0;
	cout << "N=";
	cin >> N;
	cout << "введите " << N << " целых чисел"<<endl;
	
		for (i = 1; i <= N; ++i) {
			
			
				cout << "i=" ;
			cin >> r;
			if (r > 0)
				b = 1;
		
		}
		if (b == 1)
			cout << "true";
		else
			cout << "false";
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

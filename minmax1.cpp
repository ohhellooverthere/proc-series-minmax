

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*Дано целое число N и набор из N чисел. Найти минимальный и мак-
симальный из элементов данного набора и вывести их в указанном поряд-
ке.*/
	int N,i;
	int r;
	int min, max;
	cout << "enter N ";
	cin >> N;
	cout << "enter numbers:" << endl;	
	

	for (i = 1; i <=N; i++) {
		
		cin >> r;
		switch(i)
			case 1: {
			min = max = r; break;
		}

		if (max < r)max = r;
		if (min > r)min = r;
	}
	cout << "min=" << min << endl;
	cout << "max=" << max << endl;
}


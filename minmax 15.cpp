
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    /*Даны числа B, C (0 < B < C) и набор из десяти чисел. Вывести мак-
симальный из элементов набора, содержащихся в интервале (B, C), и его

номер. Если требуемые числа в наборе отсутствуют, то дважды вывести 0.*/
	int B, C,i,r;
	int max=-1,maxnumber=0;
	cout << "enter B=";
	cin >> B;
	cout << "enter C=";
	cin >> C;
	if ((0 < B)&&(B<C))
	{
		for (i = 1; i < 10; i++) {
			cout << "число "<<i<<endl;
			cin>> r;
			
				if ((B < r) && (r < C)&&(max<r))
				{
				max = r;
					maxnumber=i;
			

			
			
		         }
		


		}


     cout << "max=" << max << endl;
			cout<<"number of max element is "<<maxnumber;
	}
	else {
		cout << "ERROR";
	}
}

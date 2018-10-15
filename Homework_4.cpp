// Напишите программу  находящую в массиве сумму элементов делящихся либо на 72 лиюо на 27(не вместе)

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int N;
	int	sum = 0;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if ((arr[i] % 27==0 || arr[i] % 72 == 0) && arr[i] % 216 != 0) sum += arr[i];
	}
	delete[] arr;
	cout << sum << endl;
	system("pause");
	return 0;
}



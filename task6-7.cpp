#include <iostream>
#include "Header.h"
using namespace std;

int main{
	//задание 6
	int n_2 = 14;
	double* array = new double[n_2] { 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.1, 2.2, 2.3, 2.4, 2.5 };
	array_change_halfs(array, n_2);
	cout << "Changed array: ";
	for (int i = 0; i < n_2; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	
	//задание 7
	int n7 = 14;
	double* arr7 = new double[n7] { 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.1, 2.2, 2.3, 2.4, 2.5};
	cout << "Amount of local minimums = " << local_min(arr7, n7) << endl;
}

#include <iostream>
#include "Header.h"
using namespace std;

int main{
int n_1 = 12;
	double* arr = new double[n_1] { 2.6, 1.2, 6.7, 7.8, 9.6, 9.9, 1.1, 13.3, 19.2, 4.0, 10.3, 20.1 };
	int counter = 0;
	selectionSort(arr, n_1, &counter);
	cout << "Descending order: ";
	for (int i = 0; i < n_1; ++i) 
  {
		cout << arr[i] << " ";
	}
	cout << std::endl;
	cout << "Amount of permutations = " << counter << endl;
}

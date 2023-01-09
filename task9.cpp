#include <iostream>
#include "Header.h"
using namespace std;

int main{
  int n9 = 15;
	int* arr9 = new int[n9] { 1, -1, 2, -2, -3, -13, 9, -11, 10, 3,  12, -6, 0, 19, -40, 34};
	int* arr91 = new int[n9];
	int k = result_array(arr9, arr91, n9);
	selectionSort_ascending(arr91, 0, k);
	selectionSort_descending(arr91, k, n9);
	std::cout << "Sorted array: ";
	for (int i = 0; i < n9; ++i) {
		std::cout << arr91[i] << " ";
	}

	return 0;
}

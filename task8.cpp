#include <iostream>
#include "Header.h"
using namespace std;
int main{ 
   int n8 = 4;
	 int m = 4;
	 int** matrix = new int* [n8];
	 matrix[0] = new int [m] { 1, 0, 0, 1 };
	 matrix[1] = new int [m] { 1, 0, 1, 0 };
	 matrix[2] = new int [m] { 1, 1, 0, 0 };
	 matrix[3] = new int [m] { 0, 1, 1, 0 };
	 for (int i = 0; i < n8; i++) {
		 cout << i << "  " << summ(matrix[i]) << endl;
	}

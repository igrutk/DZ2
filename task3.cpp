// Задание 3
#include <iostream>
using namespace std;

int main{
	double** p = 0;
	double* p0 = new double(2);
	p = &p0;
	cout << "The number in square: " << *p0 << endl;
	delete p0;
}

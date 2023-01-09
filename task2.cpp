#include "Header.h"

using namespace std;

int main() {

	int n = 3;
	int* a = new int[n] { 1, 2, 3 };
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	int* pa = a;
	int* pla = a + n - 1;
	swap(pa, pla);
	cout << "Changed array: ";
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}

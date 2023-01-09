//задание 1
#include "Header.h"
using namespace std;

int main() {
	cout << "Task 1" << endl;
	int x1 = 4;
	int x2 = 3;
	cout << "Before swap ( " << x1 << " ; " << x2 << " )" << endl;
	swap(&x1, &x2);
	cout << "After swap ( " << x1 << " ; " << x2 << " )" << endl;
}
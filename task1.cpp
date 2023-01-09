//задание 1
#include "Header.h"
using namespace std;

int main() {
	cout << "Enter x1";
	int x1 = 0;
	cin >> x1;
	cout << "Enter x2";
	int x2 = 0;
	cin >> x2;
	cout << "Before ( " << x1 << " ; " << x2 << " )" << endl;
	swap(&x1, &x2);
	cout << "After ( " << x1 << " ; " << x2 << " )" << endl;
}

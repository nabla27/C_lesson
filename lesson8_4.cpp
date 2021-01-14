#include <iostream>
using namespace std;

int main() {
	int a = 4;
	int* pA = &a;

	int b = 10;
	int* pB = &b;

	cout << "value of variable a is" << a << "\n";
	cout << "pointer of variable a is" << pA << "\n";
	cout << "value of *pA is" << *pA << "\n";
	cout << "value of variable b is" << b << "\n";
	pA = &b;
	cout << "the value of a is changed to" << *pA << "\n";
	cout << "value of variable a is" << a << "\n";

	return 0;
}

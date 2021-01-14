#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int* pA = &a;

	cout << "the value of variable a is" << a << "\n";
	cout << "the value of pA is" << pA << "\n";
	*pA = 10;
	cout << "substituted 10 for *pA\n";
	cout << "the value of variable a is" << a << "\n";
	cout << "the value of pA is" << pA << "\n";

	return 0;
}

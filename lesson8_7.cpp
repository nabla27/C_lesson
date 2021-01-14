#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main() {
	int a = 5;
	int b = 10;

	cout << "value of a is" << a << "\n";
	cout << "value of b is" << b << "\n";

	swap(&a, &b);

	cout << "swap the value of a and b.\n";
	cout << "value of a is" << a << "\n";
	cout << "value of b is" << b << "\n";

	return 0;
}

void swap(int* pX, int* pY) {
	int tmp;
	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}

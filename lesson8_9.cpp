#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main() {
	int num1 = 5;
	int num2 = 10;

	cout << "the value of variable num1 is" << num1 << "\n";
	cout << "the value of variable num2 is" << num2 << "\n";

	swap(num1, num2);

	cout << "swap the value of num1 and num2\n";
	cout << "value of variable num1 is" << num1 << "\n";
	cout << "value of variable num2 is" << num2 << "\n";

	return 0;

}

void swap(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

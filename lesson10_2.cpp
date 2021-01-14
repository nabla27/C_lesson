#include <iostream>
using namespace std;

int a = 0;
void add();

int main() {
	for (int i = 0; i < 5; i++) {
		add();
	}

	return 0;
}

void add() {
	static int b = 0;
	cout << "The value of variable a is" << a << "		";
	cout << "The value of variable b is" << b << "\n";
	a++;
	b++;
}
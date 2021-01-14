#include <iostream>
using namespace std;

union Num {
	int num1;
	int num2;
};

int main() {
	Num n;

	cout << "enter the number of num.\n";
	cin >> n.num1;

	cout << "the number of num is " << n.num1 << ".\n";
	cout << "the number of dub is " << n.num2 << ".\n";

	cout << "enter the number of dub.\n";
	cin >> n.num2;

	cout << "the number of num is" << n.num1 << ".\n";
	cout << "the number of dub is" << n.num2 << ".\n";

	return 0;
}
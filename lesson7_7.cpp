#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int main() {
	
	int num1, num2, ans;

	cout << "Please input the first integer.\n";
	cin >> num1;

	cout << "Please input the second integer.\n";
	cin >> num2;

	ans = sum(num1, num2);

	cout << "Sum of that integers is" << ans << "\n";
	return 0;
}




#include <iostream>
using namespace std;

inline int max(int x, int y) { if (x > y) { return x; } else { return y; } }

int main() {

	int num1, num2, ans;

	cout << "Please input first integer.\n";
	cin >> num1;

	cout << "Please input second integer.\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "The max integer is" << ans << "\n";
	return 0;
}
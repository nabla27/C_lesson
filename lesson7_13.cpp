#include <iostream>
using namespace std;

template <class T>
T maxt(T x, T y) {
	if (x > y) {
		return x;
	}
	else
		return y;
}

int main() {
	int num1, num2, ans1;
	double dub1, dub2, ans2;

	cout << "input two integers.\n";
	cin >> num1;
	cin >> num2;

	cout << "input two doubles.\n";
	cin >> dub1;
	cin >> dub2;

	ans1 = maxt(num1, num2);
	ans2 = maxt(dub1, dub2);

	cout << "the max integer is" << ans1 << "\n";
	cout << "the max double is" << ans2 << "\n";

	return 0;
}

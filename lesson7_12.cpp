#include <iostream>
using namespace std;

int max(int x, int y);
double max(double dx, double dy);

int main() {
	int num1, num2, ans1;
	double dub1, dub2, ans2;

	cout << "input two integers.\n";
	cin >> num1;
	cin >> num2;

	cout << "input two double.\n";
	cin >> dub1;
	cin >> dub2;

	ans1 = max(num1, num2);
	ans2 = max(dub1, dub2);

	cout << "the max integer is" << ans1 << "\n";
	cout << "the max double is" << ans2 << "\n";

	return 0;
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
double max(double dx, double dy) {
	if (dx > dy) {
		return dx;
	}
	else {
		return dy;
	}
}
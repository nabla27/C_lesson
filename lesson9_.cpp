#include <iostream>
using namespace std;

double avg(int* pT);

int main() {
	
	int test[5];
	double ans;

	cout << "enter five points\n";
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}

	ans = avg(test);

	cout << "the value of avarage is " << ans << "\n";

	return 0;
}

double avg(int* pT) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += *(pT+i);
	}

	return sum / 5;
}


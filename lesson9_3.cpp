#include <iostream>
using namespace std;

int main() {
	
	int test[5];
	int tmp;
	
	cout << "Please enter five points of peaple.\n";
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (test[i] < test[j]) {
				tmp = test[i];
				test[i] = test[j];
				test[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << "The " << i + 1 << "rd people's points is" << test[i] << "\n";
	}

	return 0;
}
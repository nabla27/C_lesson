#include <iostream>
using namespace std;

int main() {
	int num;
	int* pT;

	cout << "enter the number of people.\n";
	cin >> num;

	pT = new int[num];

	cout << "enter " << num << "points of people.\n";

	for (int i = 0; i < num; i++) {
		cin >> pT[i];
	}

	for (int i = 0; i < num; i++) {
		cout << "The " << i + 1 << "th person's test socre is" << pT[i] << ".\n";
	}

	return 0;
}

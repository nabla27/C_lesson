#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

void show(Car* pC);

int main() {
	Car car1;

	cout << "enter the car1's number\n";
	cin >> car1.num;

	cout << "enter the car1's gas\n";
	cin >> car1.gas;

	show(&car1);

	return 0;
}

void show(Car* pC) {
	cout << "The car1's number is " << pC->num << ".\n";
	cout << "The car1's gas is " << pC->gas << ".\n";
}


#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

void show(Car& c);

int main() {
	Car car1;

	cout << "enter the car1's number\n";
	cin >> car1.num;

	cout << "enter the car1's gas\n";
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car& c) {
	cout << "the car1's number is " << c.num << ".\n";
	cout << "the car1's gas is " << c.gas << ".\n";
}

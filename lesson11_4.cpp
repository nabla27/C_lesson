#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

void show(Car c);

int main() {
	Car car1;

	cout << "enter car1's number.\n";
	cin >> car1.num;

	cout << "enter car's gas.\n";
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car c) {
	cout << "car1's number is " << c.num << ".\n";
	cout << "car1's mount of gas is " << c.gas << ".\n";
}

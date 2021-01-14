#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	Car(int n, double g);
	void show();
};

Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "create the car.\n";
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "cread car that number is " << num << " and gas is " << gas << ".\n";
}

int main() {
	Car car1;
	Car car2(1234, 20.5);

	car1.show();
	car2.show();

	return 0;
}

void Car::show() {
	cout << "the number of car is" << num << " and gas is " << gas << " .\n";
}

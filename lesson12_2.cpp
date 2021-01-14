#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	void show();
	void setNumGas(int n, double g);
};

void Car::show() {
	cout << "the number of car1 is " << num << ".\n";
	cout << "the gas of car1 is " << gas << ".\n";
}

void Car::setNumGas(int n, double g) {
	if (g > 0 && g < 1000) {
		num = n;
		gas = g;
	}
	else {
		cout << "gas of car1 is not correct.\n";
	}
}

int main() {
	Car car1;
	cout << "set number to 1234 and set gas to 20.5\n";

	car1.setNumGas(1234, 20.5);

	car1.show();

	cout << "set number to 1234 and set gas to -10.0\n";

	car1.setNumGas(1234, -10.0);

	car1.show();

	return 0;

}
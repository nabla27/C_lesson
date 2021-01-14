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
	cout << " create the car.\n";
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "create car that number is " << num << " the gas is " << gas << " .\n";
}

void Car::show() {
	cout << "number is " << num << " and the gas is " << gas << " .\n";
}

int main() {
	Car mycars[3] = {
		Car(),
		Car(1234,25.5),
		Car(4567,52.2)
	};
	mycars[0].show();
	mycars[1].show();
	mycars[2].show();

	return 0;
}


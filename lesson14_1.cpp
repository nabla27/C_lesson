#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	void setCar(int n, double g);
};

class RacingCar : public Car {
private:
	int course;
public:
	RacingCar();
	void setCourse(int c);
};

Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "create the car\n";
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "set car that number is " << num << " the gas is " << gas << ".\n";
}

RacingCar::RacingCar() {
	course = 0;
	cout << "create the racing car.\n";
}

void RacingCar::setCourse(int c) {
	cout << "the number of cource is " << c << ".\n";
}

int main() {
	RacingCar car1;
	car1.setCar(1234, 25.5);
	car1.setCourse(5);

	return 0;
}

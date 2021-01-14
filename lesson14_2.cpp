#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	Car(int n, double g);
	void setCar(int n, double g);
};

class RacingCar : public Car {
private:
	int course;
public:
	RacingCar(int n, double g, int c);
	RacingCar();
	void setCourse(int c);
};

Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "create the car.\n";
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "create the car that number is " << num << " the gas is " << gas << ".\n";
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "set number of car to " << num << " and set gas to " << gas << ".\n";
}

RacingCar::RacingCar() {
	course = 0;
	cout << "create the racing car.\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g) {
	course = c;
	cout << "create racing car that number of course is " << c << ".\n";
}

void RacingCar::setCourse(int c) {
	course = c;
	cout << "set number of sourse to " << c << ".\n";
}

int main() {
	RacingCar car1(1234, 25.5, 5);
	return 0;
}

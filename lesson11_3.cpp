#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

int main(){
	Car car1 = { 1234, 25.5 };
	Car car2 = { 5678, 52.2 };
	cout << "the car1's number is " << car1.num << " and the mount of gas is " << car1.gas << ".\n";
	cout << "the car2's number is " << car2.num << " and the mount of gas is " << car2.gas << ".\n";

	car2 = car1;

	cout << "the car2's number is " << car2.num << " and the mount of gas is " << car2.gas << ".\n";

	return 0;

}

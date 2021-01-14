#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	static int sum;
	Car();
	void setCar(int n, double g);
	void show();
	static void showSum();
};

Car::Car() {
	num = 0;
	gas = 0.0;
	sum++;
	cout << "create the car.\n";
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "create the car that number is " << num << " and the gas is " << gas << ".\n";
}

void Car::show() {
	cout << "the car number is " << num << " and the gas is " << gas << ".\n";
}

void Car::showSum() {
	cout << "sum of the car is " << sum << ".\n";
}

int Car::sum = 0;
//int sum = 0;					//間違い//

int main() {
	//int Car::sum = 0;			//間違い//静的データメンバの初期化は名前空間スコープのクラス宣言の外側で定義することが必要
	//int sum = 0;				//間違い//

	Car::showSum();

	Car car1;
	car1.setCar(1234, 25.5);
	Car::showSum();

	Car car2;
	car2.setCar(4567, 52.2);
	Car::showSum();

	return 0;
}

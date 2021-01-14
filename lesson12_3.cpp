#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	void show();
	void setNumGas(int n, double g);
	int getNum() { return num; }
	double getGas() { return gas; }
};

void Car::show() {
	cout << "the number of car1 is " << num << ".\n";
	cout << "the gas of car1 is " << gas << ".\n";
}

void Car::setNumGas(int n, double g) {
	if (g > 0 && g < 1000) {
		num = n;
		gas = g;
		cout << "set num to " << n << " set gas to " << g << ".\n";
	}
	else {
		cout << "could not set num and gas.\n";
	}
}

void buy(Car c);

int main() {
	Car car1;

	cout << "set number to 1234 and set gas to 10.0\n";

	car1.setNumGas(1234, 10.0);

	car1.show();

	buy(car1);

	return 0;
}

/*
//間違い//publicでなくprivateなのでアクセスできない。
void buy(Car c) {
	cout << "bought cat that number is " << c.num << " and gas is " << c.gas << ",\n";
}
*/

/*
//間違い//オブジェクトが関連づけられていない
void buy(Car c) {
	cout << "bought cat that number is " << num << " and gas is " << gas << ".\n";
}
*/



void buy(Car c) {
	int n = c.getNum();
	int g = c.getGas();
	cout << "bought car that number is " << n << " and gas is " << g << ".\n";
}



/*
classで宣言されたメンバを、クラスの外(mainやその他の関数)で利用するためには、ドット演算子を用いてアクセスする必要がある。
(変数名).(メンバ)
変数名はmain関数内では　(構造体名orクラス名) (変数名);　でオブジェクトを作成した際の変数名
　　　　外部関数では仮引数で渡した変数名を用いる。
クラスの外(main関数、外部関数)からprivateのメンバにアクセスすることができない。
*/


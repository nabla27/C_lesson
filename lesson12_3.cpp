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
//�ԈႢ//public�łȂ�private�Ȃ̂ŃA�N�Z�X�ł��Ȃ��B
void buy(Car c) {
	cout << "bought cat that number is " << c.num << " and gas is " << c.gas << ",\n";
}
*/

/*
//�ԈႢ//�I�u�W�F�N�g���֘A�Â����Ă��Ȃ�
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
class�Ő錾���ꂽ�����o���A�N���X�̊O(main�₻�̑��̊֐�)�ŗ��p���邽�߂ɂ́A�h�b�g���Z�q��p���ăA�N�Z�X����K�v������B
(�ϐ���).(�����o)
�ϐ�����main�֐����ł́@(�\���̖�or�N���X��) (�ϐ���);�@�ŃI�u�W�F�N�g���쐬�����ۂ̕ϐ���
�@�@�@�@�O���֐��ł͉������œn�����ϐ�����p����B
�N���X�̊O(main�֐��A�O���֐�)����private�̃����o�ɃA�N�Z�X���邱�Ƃ��ł��Ȃ��B
*/


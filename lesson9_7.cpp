#include <iostream>
using namespace std;

double avg(int t[]);

int main() {
	
	int test[5];
	double ans;

	cout << "enter file points of people.\n";
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}

	ans = avg(test); //配列の先頭のアドレスを実引数としてわたす。

	cout << "value of average is" << ans << "\n";

	return 0;
}

double avg(int t[]) {

	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}

	return sum/5;
}
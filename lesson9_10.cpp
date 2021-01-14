#include <iostream>
using namespace std;

int main() {
	const char string[] = "Hello";

	for (int i = 0; string[i] != '\0'; i++) {
		cout << string[i];
	}
	cout << "\n";

	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int* pA;
	pA = new int;

	cout << "catch memori\n";

	*pA = 10;

	cout << "print *pA with using memori" << *pA << "\n";

	delete pA;

	cout << "delete memori";

	return 0;
}
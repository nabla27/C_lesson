#include <iostream>
using namespace std;

int main() {
	enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};
	Week w;

	w = SUN;

	switch (w) {
	case SUN:
		cout << "today is Sunday.\n";
		break;
	case MON:
		cout << "today is Monday.\n";
		break;
	case TUE:
		cout << "today is Tuesday.\n";
		break;
	case WED:
		cout << "today is Wednesday.\n";
		break;
	case THU:
		cout << "today is Thuersday.\n";
		break;
	case FRI:
		cout << "today is Friday.\n";
		break;
	case SAT:
		cout << "today is Sataday.\n";
		break;
	default:
		cout << "not current.\n";
	}

	return 0;
}
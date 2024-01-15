#include <iostream>
using namespace std;

int main() {
	int order;
	cout << "Menu:\n1. Coffee\n2. Tea\n3. Cola\n4. Beer\nPlease input your order number." << endl;
	cin >> order;

	switch (order) {
		case 1:
			cout << "Your order for Coffee has been placed." << endl;
			break;
		case 2:
			cout << "Your order for Tea has been placed." << endl;
			break;
		case 3:
			cout << "Your order for Cola has been placed." << endl;
			break;
		case 4:
			cout << "Your order for Beer has been placed." << endl;
			break;
	}

	return 0;
}
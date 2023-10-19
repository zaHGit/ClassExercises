#include <iostream>
using namespace std;

int main() {
	int delay;

	cout << "How many more minutes do you need to wait?" << endl;
	cin >> delay;

	if (delay >= 15) {
		int cash;
		cout << "How many pounds do you have?" << endl;
		cin >> cash;

		if (cash > 3) {
			cout << "Go grab a coffee and sit down while you wait." << endl;
		}
		else {
			cout << "May as well go for a walk while you wait." << endl;
		}
	}
	else {
		cout << "Go sit in the park and wait." << endl;
	}
		return 0;
}
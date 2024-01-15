#include <iostream>
using namespace std;

int main() {
	bool gug = true;
	while (gug) {
		int shoot;

		cout << "Rock(1), Paper(2), Scissors(3), Shoot! " << endl;
		cin >> shoot;

		if (shoot == 1) {
			cout << "I threw Paper! Sorry!" << endl;
		}
		else if (shoot == 2) {
			cout << "I threw Scissors! Sorry!" << endl;
		}
		else if (shoot == 3) {
			cout << "I threw Rock! Sorry!" << endl;
		}
		else if (shoot == 69) {
			cout << "You found the Secret Easter Egg! You win!" << endl;
			break;
		}
		else {
			cout << "Nope." << endl;
			break;
		}
	}
}
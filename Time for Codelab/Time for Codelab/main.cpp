#include <iostream>

using namespace std; 

int main() { 

	string day;
	int time;

	cout << "Day?" << endl;
	cin >> day;

	cout << "Military Time?" << endl;
	cin >> time;

	if (((day == "Monday") || (day == "monday")) && ((time == 1000) || (time == 10))) {
		cout << "Time for Codelab!" << endl;
	}
	else{
		cout << "Something else is on." << endl;
	}
		return 0; 
}
#include <iostream>

using namespace std;
int main(){
	bool loop = true;

	while (loop = true) {

		int num;
		cout << "Enter Number" << endl;
		cin >> num;

		if ((num % 2) == 0) {
			cout << "Number is Even" << endl;
		}
		else if ((num % 2) != 0) {
			cout << "Number is Odd" << endl;
		}
		
	}
		return 0; 
}
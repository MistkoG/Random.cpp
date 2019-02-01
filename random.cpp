#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {

	int user;
	int guestNumber;

		//Ask for random number to start.
		cout << "Enter a random number from 0 to 10: ";
		// Assing number to user.
		cin >> user;
		//Clear screen.
		system("cls");

		//Make sure the number do not exceed 10.
		while (user > 10) {
			cout << "Please enter number between 1 and 10: ";
			cin >> user;
		}

		// Request the number.
		cout << "What is the random number? " << endl;
		cin >> guestNumber;


	while (guestNumber != user) {
		cout << "Please try again: " << endl;
		cin >> guestNumber;
	}
	cout << "Correct, the User numer is: " << user << endl;
	system ("pause");
	return (0);
};

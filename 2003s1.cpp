#include <bits/stdc++.h>

using namespace std;

int main() {
    int diceroll;
	int square = 1;
	int input;
	while (cin >> input) {
		if (input == 0) {
			cout << "You Quit!";
			return 0;
		}

		if (square + input <= 100) {
			square += input;

			if (square == 100) {
				cout << "You are now on square " << square << endl;

				cout << "You Win!";
				return 0;
			}
			if (square == 54) {
				square = 19;
			}
			else if (square == 90) {
				square = 48;
			}
			else if (square == 99) {
				square = 77;
			}
			else if (square == 9) {
				square = 34;
			}
			else if (square == 40) {
				square = 64;
			}
			else if (square == 67) {
				square = 86;
			}
		}

		cout << "You are now on square " << square << endl;

	}
    return 0;
}
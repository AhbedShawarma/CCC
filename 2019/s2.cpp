#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

bool Prime(int x) {
	if (x == 2) {
		return true;
	}
	if (x % 2 == 0) {
		return false;
	}
	
	for (int i = 3; i < sqrt(x) + 1; i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	

	return true;
}



int main()
{

	int t, n, diff;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n % 2 == 0) {
			diff = 3;
			while (diff < n) {

				if (Prime(diff) == true && Prime((2 * n) - diff) == true) {
					cout << diff << " " << (2 * n) - diff << endl;
					break;
				}

				diff += 2;

			}
		}
		else {
			diff = 2;
			while (diff < n) {

				if (Prime(diff) == true && Prime((2 * n) - diff) == true) {
					cout << diff << " " << (2 * n) - diff << endl;
					break;
				}

				diff++;

			}
		}



	}
	return 0;
}

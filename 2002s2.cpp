#include <bits/stdc++.h>

using namespace std;

int gcd(int num, int denom) {

	int gcd;
	for (int i = num; i > 0; i--) {
		if (num % i == 0 && denom % i == 0) {
			return i;
		}
	}

	return -1;
}

int main()
{


	int num, denom, wholeNum, fNum, fDenom, n;
	cin >> num;
	cin >> denom;

	if (num >= denom || num == 0) {
		if (num % denom == 0) {
			cout << num / denom;
			return 0;
		}

		wholeNum = num / denom;
		fNum = num % denom;
		fDenom = denom;

		n = gcd(fNum, fDenom);
		if (n == -1) {
			cout << wholeNum << " " << fNum << "/" << fDenom;
			return 0;
		}
		cout << wholeNum << " " << fNum / n << "/" << fDenom / n;

	}
	else {
		n = gcd(num, denom);
		if (n == -1) {
			cout << " " << num << "/" << denom;
			return 0;
		}
		cout << num / n << "/" << denom / n;
	}

	return 0;


}
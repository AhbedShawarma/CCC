##include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	int input;
	cin >> n;
	vector<int> t;
	vector<int> low;
	vector<int> high;
	bool isOdd = false;
	int lowestTide = 0;

	for (int i = 0; i < n; i++) {
		cin >> input;
		t.push_back(input);
	}

	sort(t.begin(), t.end());
	if (n % 2 != 0) {
		lowestTide = t.at(0);
		isOdd = true;

		t.erase(t.begin());
		n--;
	}
	for (int i = n/2 - 1; i >= 0; i--) {
		low.push_back(t.at(i));
	}

	for (int i = n/2; i < n; i++) {
		high.push_back(t.at(i));
	}

	for (int i = 0; i < n/2; i++) {
		cout << low.at(i) << " ";
		cout << high.at(i) << " ";
	}

	if (isOdd == true) {
		cout << lowestTide;

	}

	return 0;
}
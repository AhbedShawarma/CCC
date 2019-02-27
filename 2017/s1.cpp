#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, runs;
	int totalSW = 0;
	int totalSP = 0;
	cin >> n;
	vector<int> sw;
	vector<int> sp;

	for (int i = 0; i < n; i++) {
		cin >> runs;
		sw.push_back(runs);
		totalSW += runs;

	}

	for (int i = 0; i < n; i++) {
		cin >> runs;
		sp.push_back(runs);
		totalSP += runs;
	}




	for (int i = n - 1; i >= 0; i--) {
		if (totalSW == totalSP) {
			cout << i + 1;
			return 0;
		}
		totalSP -= sp.at(i);
		totalSW -= sw.at(i);
	}
	cout << 0;
	return 0;
}

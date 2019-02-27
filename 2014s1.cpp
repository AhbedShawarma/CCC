#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, m, r;
	cin >> k;
	cin >> m;
	vector<int> f;
	vector<int> newF;
	f.push_back(0);

	for (int i = 1; i <= k; i++) {
		f.push_back(i);
	}


	for (int i = 0; i < m; i++) {
		cin >> r;
		newF.push_back(0);

		for (int j = 1; j < f.size(); j++) {
			if (j % r != 0) {
				newF.push_back(f.at(j));
			}
		}




		f.clear();
		f.push_back(0);

		for (int x = 1; x < newF.size(); x++) {
			f.push_back(newF.at(x));
		}
		newF.clear();
	}
	for (int i = 1; i < f.size(); i++) {
		cout << f.at(i) << endl;
	}
    return 0;
}
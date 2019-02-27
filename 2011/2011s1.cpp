#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	int t = 0;
	int s = 0;
	cin >> n;

	string input;
	string text = "";
	for (int i = 0; i <= n; i++) {
		getline(cin, input);
		text += input;
	}




	for (int i = 0; i < text.size(); i++) {
		if (text[i] == 't' || text[i] == 'T') {
			t++;
		}
		if (text[i] == 's' || text[i] == 's') {
			s++;
		}
	}

	if (t > s) {
		cout << "English";
	}
	else {
		cout << "French";
	}

	return 0;
}
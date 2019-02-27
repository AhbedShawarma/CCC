#include <bits/stdc++.h>


using namespace std;

int main()
{
	string first;
	string second;
	cin >> first;
	cin >> second;



	for (int i = 0; i < first.size(); i++) {
		if (second[i] == '*') {
			second.erase(i, 1);
			second.push_back('*');
		}


		if (first[i] == second[i]) {
			first[i] = '!';
			second[i] = '?';
		}
	}





	for (int i = 0; i < first.size(); i++) {
		if (second[i] == '?' || second[i] == '*') {
			continue;
		}
		size_t found = first.find(second[i]);
		if (found == std::string::npos && second[i] != '?' && second[i] != '*') {
			cout << "N";
			return 0;
		}

		else {
			first[found] = '!';
			second[i] = '?';
		}

	}
	cout << "A";
	return 0;
}
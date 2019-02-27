#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans;
    vector<string> guess;
    string input;
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        guess.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> input;
        ans.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        if (ans.at(i) == guess.at(i)) {
            c++;
        }
    }
    cout << c;
    return 0;
}
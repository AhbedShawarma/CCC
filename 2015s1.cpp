#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int input;
    int total = 0;
    vector<int> n;
    for (int i = 0; i < k; i++) {
        cin >> input;
        if (input == 0) {
            n.pop_back();
        }
        else {
            n.push_back(input);
        }
    }
    for (int i = 0; i < n.size(); i++) {
        total += n.at(i);
    }
    cout << total;
    return 0;
}
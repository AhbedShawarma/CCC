#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> q;
    cin >> n;
    vector<int> d;
    vector<int> p;
    int in1, in2;
    
    for (int i = 0; i < n; i++) {
        cin >> in1;
        d.push_back(in1);
    }
    
    
    for (int i = 0; i < n; i++) {
        cin >> in2;
        p.push_back(in2);
    }
    

    
    int total;

    if (q == 1) {
        sort(d.begin(), d.end());
        sort(p.begin(), p.end());
        for (int i = 0; i < n; i++) {
            if (d.at(i) > p.at(i)) {
                total += d.at(i);
            }
            else {
                total += p.at(i);
            }
        
        }
        
    }
    
    else {
        sort(d.rbegin(), d.rend());
        sort(p.begin(), p.end());
        for (int i = 0; i < n; i++) {
            if (d.at(i) > p.at(i)) {
                total += d.at(i);
            }
            else {
                total += p.at(i);
            }
        
        }
    }
    cout << total;
    return 0;
}
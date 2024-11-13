#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
vector<int> ret;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    v.resize(n);
    unordered_set<int> cards; 

    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
        cards.insert(v[i]); 
    }

    cin >> m;
    ret.resize(m);
    for (int i = 0; i < ret.size(); i++) {
        cin >> ret[i]; 
    }

    for (int i = 0; i < ret.size(); i++) {
        if (cards.count(ret[i])) { 
            cout << "1" << '\n'; 
        } else {
            cout << "0" << '\n'; 
        }
    }
    return 0;
}

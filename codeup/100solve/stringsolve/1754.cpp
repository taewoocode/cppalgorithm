#include <bits/stdc++.h>
using namespace std;

string a, b;

int main() {
    cin >> a >> b;
    
    if (a.size() < b.size()) {
        cout << a << " " << b << '\n';
    } else if (a.size() > b.size()) {
        cout << b << " " << a << '\n';
    } else {
        if (a < b) {
            cout << a << " " << b << '\n';
        } else {
            cout << b << " " << a << '\n';
        }
    }

    return 0;
}

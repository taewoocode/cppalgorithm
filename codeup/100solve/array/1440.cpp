#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ": ";
        for (int j = 0; j < n; j++) {
            if (j == i) continue; // 자기 자신은 비교 제외
            if (v[i] < v[j]) cout << "< ";
            else if (v[i] > v[j]) cout << "> ";
            else cout << "= ";
        }
        cout << '\n';
    }

    return 0;
}
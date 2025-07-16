#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;  // 선택된 수열 저장 (크기 m)

void go(int idx, int start) {
    if (idx == m) {
        for (int i = 0; i < m; i++) cout << v[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i <= n; i++) {
        v[idx] = i;           // 직접 할당
        go(idx + 1, i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    v.resize(m);

    go(0, 1);

    return 0;
}

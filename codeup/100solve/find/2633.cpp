#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = n + 1;  // 기본값: 없으면 n+1 출력
    for(int i = 0; i < n; i++) {
        if(v[i] >= k) {
            ans = i + 1;  // 1-based 인덱스
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}

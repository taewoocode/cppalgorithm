#include <bits/stdc++.h>
#include <cstring>  

using namespace std;

int n, m;
vector<int> v[1001];
int dp[1001], visited[1001], a, b, mx;

int dfs(int here) {
    visited[here] = 1;
    int ret = 1;
    for (auto there : v[here]) {
        if (!visited[there]) {
            ret += dfs(there);  
        }
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        v[b].push_back(a);  
    }

    for (int i = 1; i <= n; i++) {
        fill(visited, visited + 1001, 0);  // visited 배열을 0으로 초기화
        dp[i] = dfs(i);  //dfs를 호출할 때 마다 테스트케이스 초기화
        mx = max(dp[i], mx);  
    }

    for (int i = 1; i <= n; i++) {
        if (mx == dp[i]) cout << i << '\n';  
    }

    return 0;
}

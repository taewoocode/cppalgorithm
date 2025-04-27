/**
 * BOJ15649
 */
#include <bits/stdc++.h>
using namespace std;
const int max_n = 104;
int visited[max_n];
vector<int> selected;
int n, m;

void dfs(int here) {
    if (selected.size() == m) {
        for (int num : selected) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        
        visited[i] = 1;
        selected.push_back(i);
        dfs(i); 
        selected.pop_back();
        visited[i] = 0;
    }
}

int main() {
    cin >> n >> m;
    dfs(0); // 0부터 시작
    return 0;
}

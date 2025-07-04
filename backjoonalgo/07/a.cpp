#include <bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int n, m, start;
int graph[max_n][max_n];  
int visited[max_n];

void dfs(int node) {
    visited[node] = 1;
    cout << node << ' ';
    for (int i = 1; i <= n; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << ' ';
        for (int i = 1; i <= n; i++) {
            if (graph[node][i] && !visited[i]) {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m >> start;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    dfs(start);
    cout << '\n';

    memset(visited, 0, sizeof(visited));

    bfs(start);
    cout << '\n';

    return 0;
}

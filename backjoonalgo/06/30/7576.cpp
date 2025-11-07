#include <bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n][max_n];
int visited[max_n][max_n];
int n, m;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int bfs() {
    queue<pair<int,int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                visited[i][j] = 1;
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        int y, x;
        tie(y, x) = q.front(); q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (visited[ny][nx] != 0) continue;   
            if (a[ny][nx] != 0) continue;         

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0 && visited[i][j] == 0) return -1; 
            ans = max(ans, visited[i][j]);
        }
    }
    return ans - 1; 
}

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main() {
    FASTIO();

    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << bfs() << '\n';

    return 0;
}

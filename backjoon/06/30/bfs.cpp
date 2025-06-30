#include <bits/stdc++.h>
using namespace std;

int n, m;
const int max_n = 1004;
int a[max_n][max_n];
int visited[max_n][max_n];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int bfs(int y, int x){
    queue<pair<int, int>> q;
    visited[y][x] = 1;
    q.push({y, x});
    int size = 1;

    while (!q.empty()) {
        tie(y, x) = q.front(); q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (a[ny][nx] != 1) continue;     
            if (visited[ny][nx]) continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
            size++;
        }
    }
    return size;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int componentCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && visited[i][j] == 0) {
                int size = bfs(i, j);
                componentCount++;
                // 필요하면 각 컴포넌트 크기 출력 가능
                // cout << "Component " << componentCount << ": size = " << size << '\n';
            }
        }
    }

    cout << componentCount << '\n'; // 1로 이루어진 덩어리 개수 출력

    return 0;
}

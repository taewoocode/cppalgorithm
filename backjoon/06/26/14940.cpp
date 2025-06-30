#include <bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a[max_n][max_n];          // 지도 정보 (0: 못감, 1: 갈 수 있음, 2: 목표지점)
int visited[max_n][max_n];    // 방문 및 거리 저장 (0: 미방문, >=1: 거리+1)
int n, m;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int sy,sx;

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int y, int x) {
    queue<pair<int,int>> q;
    q.push({y, x});
    visited[y][x] = 1;  // 방문 처리 + 거리 1로 초기화 (실제 거리는 0)

    while (!q.empty()) {
        auto [cy, cx] = q.front();
        q.pop();

        for (int dir=0; dir<4; dir++) {
            int ny = cy + dy[dir];
            int nx = cx + dx[dir];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (a[ny][nx] == 0) continue;           // 이동 불가
            if (visited[ny][nx] != 0) continue;     // 이미 방문

            visited[ny][nx] = visited[cy][cx] + 1;  // 거리+1
            q.push({ny, nx});
        }
    }
}

int main() {
    FASTIO();
    cin >> n >> m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
            visited[i][j] = 0;  // 초기화
            if (a[i][j] == 2) {
                sy = i;
                sx = j;
            }
        }
    }

    bfs(sy, sx);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] == 0) cout << 0 << ' ';               // 원래 이동 불가
            else if (visited[i][j] == 0) cout << -1 << ' ';   // 갈 수 없는 땅 (도달 불가)
            else cout << visited[i][j] - 1 << ' ';            // 거리 출력 (0부터 시작)
        }
        cout << '\n';
    }

    return 0;
}

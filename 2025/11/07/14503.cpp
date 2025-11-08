#include <bits/stdc++.h>
using namespace std;

int n, m;
int r, c, d;
int a[54][54];
int visited[54][54];

int dy[4] = {-1, 0, 1, 0}; 
int dx[4] = {0, 1, 0, -1};
int ans = 0;

void go(int y, int x, int dir) {

    if (visited[y][x] != 1) {
        visited[y][x] = 1;
        ans++;
    }

    for (int i = 0; i < 4; i++) {
        dir = (dir + 3) % 4; 
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if (a[ny][nx] == 0 && !visited[ny][nx]) {
            go(ny, nx, dir);
            return;
        }
    }

    int back = (dir + 2) % 4;
    int by = y + dy[back];
    int bx = x + dx[back];

    if (a[by][bx] == 1) return;
    go(by, bx, dir);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    cin >> r >> c >> d;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    go(r, c, d);
    cout << ans << "\n";
    return 0;
}

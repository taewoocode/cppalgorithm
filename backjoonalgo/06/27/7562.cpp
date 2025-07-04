#include <bits/stdc++.h>
using namespace std;

int t;
const int max_n = 304;
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int visited[max_n][max_n];
int l;
int sy, sx, ey, ex;

int go(int sy, int sx, int ey, int ex) {
    memset(visited, -1, sizeof(visited));
    queue<pair<int,int>> q;
    q.push({sy, sx});
    visited[sy][sx] = 0;

    while (!q.empty()) {
        tie(sy, sx) = q.front(); q.pop();
        if (sy == ey && sx == ex) return visited[sy][sx];

        for (int i = 0; i < 8; i++) { 
            int ny = sy + dy[i];
            int nx = sx + dx[i];

            if (ny < 0 || ny >= l || nx < 0 || nx >= l) continue;
            if (visited[ny][nx] != -1) continue;

            visited[ny][nx] = visited[sy][sx] + 1;
            q.push({ny, nx});
        }
    }
    return -1; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> t;
    while (t--) {
        cin >> l;
        cin >> sy >> sx;
        cin >> ey >> ex;
        cout << go(sy, sx, ey, ex) << '\n';
    }

    return 0;
}

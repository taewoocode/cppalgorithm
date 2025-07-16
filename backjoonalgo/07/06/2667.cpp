#include <bits/stdc++.h>
using namespace std;

const int max_n = 30;
int N;
int a[max_n][max_n];
bool visited[max_n][max_n];

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int y, int x) {
    visited[y][x] = true;
    int cnt = 1;

    for (int dir = 0; dir < 4; dir++) {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
        if (visited[ny][nx]) continue;
        if (a[ny][nx] == 0) continue;

        cnt += dfs(ny, nx);
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++) {
            a[i][j] = s[j] - '0';
        }
    }

    int groups[625];  
    int group_count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && a[i][j] == 1) {
                groups[group_count++] = dfs(i, j);
            }
        }
    }

    sort(groups, groups + group_count);

    cout << group_count << "\n";
    for (int i = 0; i < group_count; i++) {
        cout << groups[i] << "\n";
    }

    return 0;
}

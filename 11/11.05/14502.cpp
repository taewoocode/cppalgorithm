#include <bits/stdc++.h>
using namespace std;

int a[10][10], visited[10][10], n, m;
vector<pair<int, int>> virusList, wallList;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x) {
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || a[ny][nx] == 1) continue;
        visited[ny][nx] = 1;
        dfs(ny, nx);
    }
}

int solve() {
    fill(&visited[0][0], &visited[0][0] + 10 * 10, 0);
    for (pair<int, int> b : virusList) {
        visited[b.first][b.second] = 1;
        dfs(b.first, b.second);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0 && !visited[i][j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) virusList.push_back({i, j});
            if (a[i][j] == 0) wallList.push_back({i, j});
        }
    }

    int ret = 0; // 최대 안전 영역 크기를 저장할 변수

    for (int i = 0; i < wallList.size(); i++) {
        for (int j = i + 1; j < wallList.size(); j++) {
            for (int k = j + 1; k < wallList.size(); k++) {
                // 벽을 세움
                a[wallList[i].first][wallList[i].second] = 1;
                a[wallList[j].first][wallList[j].second] = 1;
                a[wallList[k].first][wallList[k].second] = 1;

                // 안전 영역 크기 계산
                ret = max(ret, solve());

                // 세운 벽 제거
                a[wallList[i].first][wallList[i].second] = 0;
                a[wallList[j].first][wallList[j].second] = 0;
                a[wallList[k].first][wallList[k].second] = 0;
            }
        }
    }

    cout << ret << "\n";
    return 0;
}

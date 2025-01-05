#include <bits/stdc++.h>
using namespace std;

int m, n, k;
#define y1 aaaa // y1을 매크로로 정의
int x1, x2, y2, y1; // y1은 이제 aaaa로 정의됨
int a[104][104], visited[104][104];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
vector<int> ret;

int dfs(int y, int x) {
    visited[y][x] = 1; // 현재 위치 방문 처리
    int count = 1; // 영역의 크기 초기화
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i]; // 새로운 y 좌표
        int nx = x + dx[i]; // 새로운 x 좌표
        if (ny < 0 || nx < 0 || nx >= n || ny >= m) {
            continue; // 배열 범위를 벗어나면 continue
        }
        // 방문 여부 및 색칠된 상태 체크
        if (visited[ny][nx] == 1 || a[ny][nx] == 1) {
            continue; // 이미 방문한 경우 또는 색칠된 경우 continue
        }
        count += dfs(ny, nx); // 연결된 노드에서 DFS 호출 및 카운트 증가
    }
    return count; // 현재 영역의 크기 반환
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> m >> n >> k; // m, n, k 입력 받기
    memset(a, 0, sizeof(a)); // 배열 초기화
    memset(visited, 0, sizeof(visited)); // 방문 배열 초기화
    
    for (int i = 0; i < k; i++) {
        cin >> x1 >> y1 >> x2 >> y2; // 사각형 좌표 입력, y1은 aaaa로 정의됨
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) { // y1은 aaaa로 정의됨
                a[y][x] = 1; // (x, y) 좌표에 색칠
            }
        }
    }
    
    // 연결 요소 찾기 -> DFS
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 1 && visited[i][j] == 0) {
                ret.push_back(dfs(i, j)); // DFS 호출 및 영역 크기 저장
            }
        }
    }
    
    sort(ret.begin(), ret.end()); // 크기 정렬
    cout << ret.size() << '\n'; // 영역의 개수 출력
    for (auto i : ret) {
        cout << i << ' '; // 각 영역의 크기 출력
    }
    
    return 0;
}

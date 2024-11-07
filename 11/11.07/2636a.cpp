#include <bits/stdc++.h>
using namespace std; 

// 치즈 배열과 방문 여부 배열 선언
int a[104][104], visited[104][104];

// 상하좌우 네 방향 탐색을 위한 배열
int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};   

// 세로 길이(n), 가로 길이(m), 시간을 나타내는 cnt, 마지막 치즈 조각 수 cnt2 선언
int n, m, cnt, cnt2;

// 치즈가 녹을 위치를 저장할 벡터
vector<pair<int, int>> v;

// 외부 공기를 탐색하여 치즈와 접촉하는 치즈의 위치를 벡터에 저장하는 함수
void go(int y, int x) {
    // 현재 위치를 방문했음을 표시
    visited[y][x] = 1;
    
    // 현재 위치가 치즈라면 외부 공기와 접촉한 것이므로 벡터에 위치 추가 후 함수 종료
    if (a[y][x] == 1) {
        v.push_back({y, x});
        return;
    }

    // 상하좌우 네 방향으로 탐색
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        // 배열 범위를 벗어나거나 이미 방문한 경우는 넘어감
        if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue; 
        
        // 다음 위치로 이동하여 탐색을 이어감
        go(ny, nx);
    }
    return;
}

int main() { 
    // 배열 크기와 치즈 배열 입력 받기
    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // 치즈가 다 녹을 때까지 반복
    while (true) { 
        // 방문 여부 배열 초기화
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
        // 치즈 위치 벡터 초기화
        v.clear(); 
        
        // (0, 0)에서 외부 공기를 탐색 시작
        go(0, 0); 

        // 현재 녹을 치즈 조각의 수를 저장
        cnt2 = v.size();

        // 외부 공기와 접촉한 치즈 조각을 모두 녹임
        for (pair<int, int> b : v) { 
            a[b.first][b.second] = 0;
        }   

        // 치즈가 남아있는지 확인
        bool flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != 0) flag = 1; // 치즈가 남아있으면 flag를 1로 설정
            }
        }

        // 치즈가 녹는 데 걸린 시간을 증가
        cnt++;

        // 치즈가 다 녹았다면 반복문 종료
        if (!flag) break;
    }

    // 치즈가 모두 녹는 데 걸린 시간과 마지막으로 녹은 치즈 조각의 개수를 출력
    cout << cnt << '\n' << cnt2 << '\n'; 
}

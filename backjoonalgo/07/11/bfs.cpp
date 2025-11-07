#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int visited[max_n][max_n];
int a[max_n][max_n];
int n, m;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int bfs(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1; // 시작 지점 거리 = 1
    q.push({y,x});

    while(!q.empty()){
        tie(y,x) = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[ny][nx] != 0) continue;
            if(a[ny][nx] == 1) continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    return visited[n-1][m-1]; // 도착 못하면 0
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j]; // 여기서 정수 입력이면 이 방식, 문자열이면 따로 처리
        }
    }

    int ret = bfs(0, 0);
    if(ret == 0) cout << "도달 불가\n";
    else cout << ret - 1 << '\n'; // 거리 출력 (시작을 1로 했으니 -1)
}

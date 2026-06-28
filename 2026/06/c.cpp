#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int ret, n;
int a[max_n][max_n], visited[max_n][max_n];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

void dfs(int y, int x, int d){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(!visited[ny][nx] && a[ny][nx] > d){
            dfs(ny,nx,d);
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // 이것이 테스트케이스이다. 1부터 101까지 돌면서 방문배열은 초기화를 시켜놔야 한다.
    for(int d = 1; d < 101; d++){
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] > d && !visited[i][j]){
                    dfs(i,j,d);
                    cnt++;
                }
            }
        }   
        ret = max(ret, cnt);
    }
    cout << ret << '\n';
    
    return 0;
}
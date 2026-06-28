/**
 * 안전지대
 * Connected Component
 */

#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int visited[max_n][max_n], a[max_n][max_n];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int n,m,ret;

void dfs(int y, int x, int d){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(a[ny][nx] > d && !visited[ny][nx]){
            dfs(ny,nx,d);
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int d = 1; d < 101; d++){
        fill(&visited[0][0], &visited[0][0] + max_n * max_n, 0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && a[i][j] > d){
                    dfs(i,j,d);
                    cnt++;
                }
            }
        }
        ret = max(ret,cnt);
    }
    cout << ret << '\n';
}

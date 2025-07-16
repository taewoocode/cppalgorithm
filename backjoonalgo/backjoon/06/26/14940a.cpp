#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n][max_n];
int visited[max_n][max_n];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m;

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

void bfs(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push({y,x});

    while(q.size()){
        auto [cy,cx] = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[y][x] == 1) continue;
            if(a[y][x] == 0) continue;

            visited[ny][nx] = visited[cy][cx] + 1;
            q.push({ny,nx});
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            visited[i][j] = 0;
            if(a[i][j] == 2){
               
            }
        }
    }

    return 0;
}
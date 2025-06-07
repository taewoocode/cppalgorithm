#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int a[max_n][max_n];
int visited[max_n][max_n];
int n,m;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;

        if(ny >= n || ny < 0 || nx >= m || nx < 0){
            continue;
        }

        if(a[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny,nx);
        }
    }
}

int main(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dfs(i,j);
        }
    }

    return 0;
}
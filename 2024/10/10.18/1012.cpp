#include<bits/stdc++.h>
using namespace std;
int a[51][51];
bool visited[51][51];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int ny,nx,n,m,t,x,y,ret,k;

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m){
            continue;
        }
        if(a[ny][nx] == 1){
            if(visited[ny][nx]){
                dfs(ny,nx);
            }   
        }
    }
    return;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        ret = 0;
        cin >> m >> n >> k;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            a[y][x] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1 && !visited[i][j]){
                    dfs(i,j);
                    ret++;
                }
            }
        }
    }
    cout << ret << '\n';
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int m,n,k,y,x,ret,ny,nx,t;
int a[51][51];
bool visited[51][51];

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i]; 
        if(ny < 0 || nx < 0 || ny >= n || nx >= m){
            continue;
        }
        if(a[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny,nx);
        }
    }
    return;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        fill(&a[0][0], &a[0][0] + 51 * 51,0);
        fill(&visited[0][0], &visited[0][0] + 51 * 51,0);
        ret = 0;
        cin >> m >> n >> k;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            a[y][x] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1 && !visited[i][j]){
                    dfs(i,j);
                    ret++;
                }
            }
        }
        cout << ret << '\n';
    }

    return 0;
}

//conected componet문제

/*
DFS, BFS로도 풀 수 있다.
DFS가 조금 더 쉽게 풀 수 있다.
*/
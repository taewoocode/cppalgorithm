#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int>> q;
const int max_n = 104;
int a[max_n][max_n]; int visited[max_n][max_n];
int sy,sx,ey,ex,n,m,y,x;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    visited[sy][sx] = 1;
    q.push({sy,sx});

    while(q.size()){
        tie(y,x) = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            
            if(ny >= n || ny < 0 || nx >= m || nx < 0 || a[ny][nx] == 1){
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny,nx});
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << visited[i][j] << '\n';
        }
    }
    return 0;
}
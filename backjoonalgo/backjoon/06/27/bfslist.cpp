#include<bits/stdc++.h>
using namespace std;
int n,m;
const int max_n = 1004;
int a[max_n][max_n];
int visited[max_n][max_n];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int bfs(const int y, const int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push({y,x});
    int area_count = 1;

    while(q.size()){
        tie(y,x) = q.front(); q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= n | nx >= m || n < 0 || m < 0) continue;
            if(visited[ny][nx]) continue;
            if(a[ny][nx] != 0) continue;


            visited[ny][nx] = 1;
            q.push({ny,nx});
            area_count++;
        }
    }    
    return area_count;
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
}

int main(){
    FASTIO();
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int area_count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(visited[i][j] == 0 && a[i][j] != 1){
                area_count = max(area_count, bfs(i,j));
            }
        }
    }

    cout << area_count << '\n';

    return 0;
}
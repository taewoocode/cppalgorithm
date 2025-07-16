#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m;
int a[max_n][max_n], visited[max_n][max_n];
int area;


int bfs(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push({y,x});
    area = 1;


    while(q.size()){
        tie(y,x) = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(a[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;

            visited[ny][nx] = 1;
            q.push({ny,nx});
            area++;
        }
    }

    return area;
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    FASTIO();
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    int max_area = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 && visited[i][j] == 0){
                cnt++;
                max_area = max(max_area, bfs(i,j));
            }
        }
    }

    cout << cnt << '\n' << max_area << '\n';

    return 0;
}
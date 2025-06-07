#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int a[max_n][max_n], visited[max_n][max_n];
int n,m,sy,sx,ey,ex;   int x,y;

int main(){
    scanf("%d %d", &n, &m);
    cin >> sy >> sx;
    cin >> ey >> ex;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    queue<pair<int,int>> q;
    visited[sy][sx] = 1;
    q.push({sy,sx});
    while(q.size()){
        tie(y,x) = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if(ny < 0 || ny >= n || nx < 0 || nx > m || a[ny][nx] == 1 ) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }

    }
}


#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int visited[max_n][max_n];
vector<int> v[max_n];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int sy,sx,ey,ex,y,x;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    scanf("%d %d", &n,&m);
    cin >> sy >> sx;
    cin >> ey >> ex;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    queue<pair<int,int>> q;
    visited[sy][sx] = 1;
    q.push({sy,sx});

    while(q.size()){
        tie(y,x) = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if(ny < 0 || ny > n || nx > m || nx < 0){
                continue;
            }
            if(a[ny][nx] == 1){
                continue;
            }

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }

    printf("%d", visited[ey][ex]);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << visited[i][j] << ' ';
        }
    }
    return 0;
}
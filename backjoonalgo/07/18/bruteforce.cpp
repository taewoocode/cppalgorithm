#include<bits/stdc++.h>
using namespace std;
int n;
int a[10004];

int main(){
    cin >> n;

    int maxSum =0;
    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int sum = a[i] + a[j] + a[k];
                if(sum > maxSum){
                    maxSum = sum;
                    found = true;
                }
            }
        }
    }

    if(found) cout << maxSum << '\n'; 
    else cout << "not Found\n"

    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int visited[max_n][max_n];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int a[max_n][max_n];
int n,m;
int ret;

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int bfs(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push({y,x});

    while(q.size()){
        tie(y,x) = q.front(); q.pop();

        for(int i =0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[ny][nx]) continue;
            if(a[ny][nx] == 1) continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    return visited[n-1][m-1];
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int ret = bfs(0,0);
    cout << ret << '\n';

    return 0;
}

#include<stdio.h>
int main(){
    int num[3][3] {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr = num[0];
    ptr += 5;
    while(*ptr != 9){
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}
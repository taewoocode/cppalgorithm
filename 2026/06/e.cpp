#include<bits/stdc++.h>
using namespace std;
#define y1 aaaa
const int max_n = 104;
int a[max_n][max_n], m,n,k,x1,x2,y1,y2, visited[max_n][max_n];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
vector<int> ret;
int dfs(int y, int x){
    visited[y][x] = 1;
    int ret = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(y < 0 || x < 0 || ny >= n; nx >= m) continue;
        if(visited[ny][nx] == 1) continue;

        // 색칠되어 있다면 Continue
        if(a[ny][nx] == 1) continue;
        ret += dfs(ny,nx);
    }
    return ret;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> x1 >> x2 >> y1 >> y2;
    for(int x = x1; x < x2; x++){
        for(int y = y1; y < y2; y++){
            a[y][x] = 1; // 색칠하기
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 1 && visited[i][j] == 0){
                ret.push_back(dfs(i,j));
            }
        }
    }
    sort(ret.begin(), ret.end());
    cout << ret.size() << '\n';
    for(int a : ret) cout << a << " ";
    return 0;
}
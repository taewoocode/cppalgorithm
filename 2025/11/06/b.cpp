#include<bits/stdc++.h>
using namespace std;
const int max_n = 3;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
vector<int> v;
const int n = 3;
int visited[max_n][max_n];
int a[max_n][max_n] {
    {10, 20, 21},
    {70, 90, 12},
    {80, 110, 120}
};

void print(){
    for(int i : v) cout << i << " ";
    cout << '\n';
}

void go(int y, int x){
    if(y == n - 1 && x == n - 1){
        print();
        return;
    }

    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || nx >= n || ny >= n) continue;
        if(visited[ny][nx]) continue;
        visited[ny][nx] = 1;
        v.push_back(a[ny][nx]);
        
        go(ny, nx);
        visited[ny][nx] = 0;
        v.pop_back();
    
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    visited[0][0] = 1;
    v.push_back(10);
    go(0,0);
    return 0;
}
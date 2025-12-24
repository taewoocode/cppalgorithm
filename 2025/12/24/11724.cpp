#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1004];
bool visited[1001];
int n,m;

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;


}
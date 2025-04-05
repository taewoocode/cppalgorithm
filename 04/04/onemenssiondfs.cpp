#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int visited[max_n];
vector<int> adj[max_n];

void dfs(int n){
    visited[n] == 1;
    for(int here : adj[n]){
        if(visited[here] == 0){
            dfs(here);
        }
    }
}
int main(){
    adj[1].push_back(2);
    return 0;
}
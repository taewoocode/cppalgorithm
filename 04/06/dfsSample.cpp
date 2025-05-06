#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int visited[max_n];
vector<int> adj[max_n];

void dfs(int n){
    visited[n] = 1;

    for(auto next : adj[n]){
        if(visited[next] == 0){
            dfs(next);
        }
    }
}

void bfs(int n){
    queue<int> q;
    visited[n] = 1; // 방문처리
    q.push(n);
    
    //큐에 들어가 있는 사이즈 만큼 반복
    while(q.size()){
        int current = q.front();
        q.pop();

        for(auto here : adj[n]){
            if(visited[here] == 0){
                visited[here] = visited[current] + 1;
                q.push(here);
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
vector<int> adj[max_n];
int visited[max_n];

void BFS(int n){
    queue<int> q;
    visited[n] = true;
    q.push(n);
    
    while(q.size()){
        int current = q.front();
        q.pop();
        for(auto next : adj[n]){
            if(visited[next] == 0){
                visited[next] = visited[current] + 1;
                q.push(next);
            }
        }
    }
}
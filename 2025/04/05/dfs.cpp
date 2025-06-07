#include<bits/stdc++.h>
using namespace std;
const int max_n = 4;
vector<int> adj[max_n];
int visited[max_n];
void dfs(int here){
    visited[here] = 1;
    for(auto i : adj[here]){
        if(visited[i] == 0){
            dfs(i);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int> adj;

void BFS(int u){
    visited[u] = 1;
    q.push(u);
    while(q.size()){
        int current = q.front();
        q.pop();

        for(auto next : adj[current]){
            if(visited[next] == 0){
                visited[next] = visited[current] + 1;
                q.push(next);
            }
        }

    }

}
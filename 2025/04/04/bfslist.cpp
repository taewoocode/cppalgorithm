#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int visited[100];
queue<int> q;
int ret;
int nodeList[] = {10,12,14,16,18,20,22,24};

void bfs(int n){
    visited[n] = 1;
    q.push(n);

    while(q.size()){
        int current = q.front();
        q.pop();

        for(auto next : adj[current]){
            if(visited[next]) continue;
            visited[next] = visited[current] + 1;
            q.push(next);
        }
    }
}

int main(){
    adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);
    adj[12].push_back(18);
    adj[12].push_back(20);
    adj[20].push_back(23);
    adj[20].push_back(24);

    bfs(10);
    for(int i : nodeList){
        cout << i << " : " << visited[i] << '\n';
    }
    cout << "최단거리는: " << visited[24] - 1 << '\n';
    
}
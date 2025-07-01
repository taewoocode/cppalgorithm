#include<bits/stdc++.h>
using namespace std;
const int max_n = 100;
vector<int> graph[max_n];
int visited[max_n];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(q.size()){
        int current = q.front(); q.pop();

        for(int next : graph[current]){
            if(visited[next] == 0){
                visited[next] = visited[current] + 1;
                q.push(next);
            }
        }
    }
}




#include<bits/stdc++.h>
using namespace std;
int visited[];
queue<int> q;
vector<int> graph;
void dfs(int n){
    q.push(n);
    visited[n] = 1;
    while(q.size()){
        int current = q.front();
        q.pop();
        for(auto next : graph[current]){
            if(visited[next] == 0){
                visited[next] = visited[current] + 1;
                q.push(next);
            }
            if(visited[next]){
                continue;
            }
        }
    }
}


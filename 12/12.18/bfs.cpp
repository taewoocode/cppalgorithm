/**
 * BFS는 큐로 구현한다.
 * 선입선출 구조. 먼저 들어오면 먼저 나간다.
 * 화장실 줄서는 것 생각하면 됨
 * 결국 BFS는 같은 가중치를 가진 그래프에서 최단거리 알고리즘으로 쓰인다.
 *    
 */
#include<bits/stdc++.h>
using namespace std;
int visited[100];
queue<int> q;
vector<int> adj[100];
int bfs(int here){
    q.push(here);
    while(q.size()){
        int here = q.front();
        q.pop();
        for(int there : adj[here]){

            // 1이면 이미 방문한 노드임
            if(visited[there]) continue;

            // there 노드를 방문하는데 필요한 이동 횟수를 기록
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int visited[100];
queue<int> q;
int here;
int main(){
    q.push(here);
    while(q.size()){
        int here = q.front();
        q.pop();
        for(int there : adj[here]){
            if(visited[there]) continue;
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }

    return 0;
}






















#include<bits/stdc++.h>
using namespace std;
int n;
double dist[101][101];
bool decision(double d){
    vector<bool> visited(n,false);
    visited[0] = true;
    queue<int> q;
    q.push(0);
    int seen = 0;
    while(!q.empty()){
        int here = q.front();
        q.pop();
        ++seen;
        for(int there = 0; there < n; ++there){
            if(!visited[there] && dist[here][there] <= d){
                visited[there] = true;
                q.push(there);
            }
        }
    }
    return seen == n;
}

double optimize(){
    double lo = 0, hi = 1416.00;
    for(int it = 0; it < 100; it++){
        double mid = (lo + hi) / 2;
        if(decision(mid)){
            hi = mid;
        } else {
            lo = mid;
        }
    }
    return hi;
}
#include<bits/stdc++.h>
using namespace std;

// n: 노드의 개수 (정점의 수)
int n;
// dist: 2차원 배열로, dist[i][j]는 i번 노드와 j번 노드 간의 거리를 나타냄
double dist[101][101];

// decision 함수: 주어진 거리 d 이하로 모든 노드를 연결할 수 있는지 확인
bool decision(double d){
    vector<bool> visited(n, false); // 방문 여부를 추적하는 배열 (초기화: 모두 false)
    visited[0] = true; // 0번 노드는 방문했으므로 true로 설정
    queue<int> q; // BFS를 위한 큐
    q.push(0); // 큐에 0번 노드를 추가
    int seen = 0; // 방문한 노드의 수
    
    // BFS 탐색 시작
    while(!q.empty()){
        int here = q.front(); // 현재 노드
        q.pop(); // 큐에서 현재 노드 제거
        ++seen; // 방문한 노드 수 증가
        
        // 모든 노드에 대해
        for(int there = 0; there < n; ++there){
            // 아직 방문하지 않았고, dist[here][there]가 d 이하라면
            if(!visited[there] && dist[here][there] <= d){
                visited[there] = true; // 방문 처리
                q.push(there); // 큐에 추가
            }
        }
    }
    // 모든 노드를 방문했으면 true 반환, 그렇지 않으면 false 반환
    return seen == n; // '=='는 '='가 아니라 비교 연산자로 변경해야 합니다
}

// optimize 함수: 이분 탐색을 통해 최적의 거리를 찾음
double optimize(){
    double lo = 0, hi = 1416.00; // 거리가 0부터 1416까지 가능
    // 이분 탐색 반복 (최대 100번)
    for(int it = 0; it < 100; it++){
        double mid = (lo + hi) / 2; // 중간 값 계산
        if(decision(mid)){ // 중간 값으로 모든 노드를 연결할 수 있다면
            hi = mid; // 최적의 거리를 좁히기 위해 hi 값을 mid로 설정
        } else {
            lo = mid; // 연결할 수 없다면 lo 값을 mid로 설정
        }
    }
    return hi; // 최종적으로 가장 작은 최대 거리 반환
}

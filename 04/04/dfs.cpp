#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
vector<int> graph[max_n];
int visited[max_n];

int dfs(int n){
    visited[n] = true;
    cout << n << '\n';
    for(auto next : graph[n]){
        if(visited[next] == 0){
            dfs(next);
        }
    }
    cout << n << "로부터 시작된 함수가 종료되었습니다.\n";
}

int main(){
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[2].push_back(5);

    dfs(1);
}
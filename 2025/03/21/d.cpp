#include<bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    for(int i = 0; i < todo_list.size(); i++){
        if(finished[i] == false){
            answer.push_back(todo_list[i]);
        }
    }
    return answer;
}

#include<bits/stdc++.h>
using namespace std;
const int n = 6;
int visited[n];
vector<int> adj[n];
void dfs(int here){
    visited[here] = 1;
    for(auto i : adj[here]){
        if(visited[i] == 0){
            dfs(i);
        }
    }
}
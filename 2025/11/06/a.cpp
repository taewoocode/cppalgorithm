#include<bits/stdc++.h>
using namespace std;
vector<int> adj[4];
vector<int> v;
int visited[4];

void print(){
    for(int i : v) cout << char(i + 'A') << " ";
    cout << '\n';
}

void go(int idx){
    if(v.size() == 3){
        print();
        return;
    }
    
    for(int there : adj[idx]){
        if(visited[there]) continue;
        visited[there] = 1;
        v.push_back(there);
        cout << "push_back :: there: " << there << '\n';
        for(int i : v) cout << i << " ";
        cout << '\n';
        go(there);
        visited[there] = 0;
        v.pop_back(); 

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    visited[0] = 1;
    v.push_back(0);

    go(0);
    return 0;
}
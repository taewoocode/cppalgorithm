#include<bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
const int max_n = 200004;
int visited[max_n], prev[max_n], n, k, ret, here, cnt, next;
vector<int> v;
queue<int> q;
int main(){
    cin >> n >> k;
    visited[n] = 1;
    q.push(n);
    while(q.size()){
        here = q.front();
        q.pop();
        if(here == k){
            ret = visited[k];
            break;
        }
    for(auto next : {here + 1, here - 1, here * 2}){
        if(next >= max_n || next < 0 || visited[next]){
            continue;
        }
        visited[next] = visited[here] + 1;
        prev[next] = here;
        q.push(next);
    }
    for(int i = k; i != n; i = prev[i]){

    }
    }
    
    








    return 0;
}
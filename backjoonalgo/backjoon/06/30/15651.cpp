#include<bits/stdc++.h>
using namespace std;
int n,m;
int ret,cnt;
vector<int> v;

void go(int idx){
    if(idx == m){
        for(int i = 0; i < m; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return ;
    }

    for(int i = 1; i <= n; i++){
        v[idx] = i;
        go(idx + 1);
    }
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}


int main(){

    cin >> n >> m;
    v.resize(n);
    go(0);
    return 0;
}


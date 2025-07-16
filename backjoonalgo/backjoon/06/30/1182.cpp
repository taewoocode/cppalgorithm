#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int cnt;
int ret;

void go(int idx, int sum){
    if(idx == n){
        if(sum == m) cnt++;
        return;
    }

    go(idx + 1, sum + v[idx]);
    go(idx + 1, sum);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    go(0,0);

    if(m == 0) cnt--;
    cout << cnt << '\n';

}
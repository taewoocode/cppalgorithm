#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
int ret,cnt;
const int mod = 11;


void go(int idx, int sum){
    if(ret == 10) return;
    if(idx == n){
        ret = max(ret, sum % mod);
        cnt++;
        return;
    }

    go(idx + 1, sum + v[idx]);
    go(idx + 1, sum);

}

int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    go(0,0);
    cout << ret << '\n';
    cout << cnt << '\n';

}
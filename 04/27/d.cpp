#include<bits/stdc++.h>
using namespace std;
int ret,cnt,n,temp,mod;
vector<int> v;
void go(int idx, int sum){
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
    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    go(0,0);
    cout << ret << '\n';
    cout << cnt << '\n';

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a,b,v,ret;
int ans;
int main(){
    cin >> a >> b >> v;
    ret = a - b;
    ans /= v % ret;
    cout << ans << '\n';

    return 0;
}
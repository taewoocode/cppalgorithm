#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll POW(ll a, ll b, ll c){
    int val = 1;
    while(b--){
        val *= a;
    }
    int divide_value = val % c;
    return divide_value;
}

ll go(ll a, ll b, ll c ){
    if(b == 1) return a % c;
    ll ret = go(a, b /2, c);
    ret = (ret * ret) % c;
    if(b % 2) ret = (ret * a) % c;
    return ret;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    cout << POW(a,b,c) << '\n';
    cout << go(a,b,c) << '\n';
}

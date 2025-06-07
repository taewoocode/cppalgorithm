#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll g;
vector<ll> v(n+1,0);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll max = *max_element(v.begin(), v.end());
    vector<ll> f(max + 1, 0);
    vector<ll> g(max + 1, 0);

    for(ll i = 1; i <= max; i++){
        for(ll j = i; j <= max; j += i){
            f[j] += i;
        }
        g[i] = g[i - 1] + f[i];
    }

    for(int i = 0; i < n; i++){
        cout << g[v[i]] << '\n';
    }
   

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n ;
    cin >> n;
    v.resize(n + 1);
    v[0] = 0;
    v[1] = 1;
    int ret = 0;

    for(int i = 2; i <= n; i++){
        v[i] = v[i - 1] + v[i - 2];
    }
    cout << v[n] << '\n';

    return 0;
}
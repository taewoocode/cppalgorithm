#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ret = 0;
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size(); i++){
        ret = max(ret,v[i] * (i + 1));
    }
    cout << ret << '\n';
}
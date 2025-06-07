#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    // cout << '\n';

    int x;
    cin >> x;
    int ret = 0;

    sort(v.begin(), v.end());
    
    int l,r;
    l = 0, r = n - 1;
    
    while(l < r){
        if(v[l] + v[r] < x) l++;
        else if(v[l] + v[r] > x) r--;
        else if(v[l] + v[r] == x) r--, ret++;
    }
    
    // cout << ret << '\n';

    return 0;
}
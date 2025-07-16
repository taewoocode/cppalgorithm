#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    v.resize(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = INT_MAX;
    int start = 0, end = 0;
    
    while(end < n){
        int diff = v[end] - v[start];
        if(diff >= m){
            ans = min(ans,diff);
            start++;
        } else end++;

        if(start == end) end++;
    }

    cout << ans << '\n';


    return 0;
}
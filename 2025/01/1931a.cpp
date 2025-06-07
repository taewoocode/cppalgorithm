#include<bits/stdc++.h>
using namespace std;
int n, from, to, idx = 0, ret = 1;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fastIO();
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> from >> to;
        v.push_back({to,from});
    }
    sort(v.begin(), v.end());
    from = v[0].second;
    to = v[0].first;
    for(int i = 1; i < n; i++){
        if(v[i].second < to) continue;
        else{
            from = v[i].second;
            to = v[i].first;
            ret++;
        }
    }
    cout << ret << '\n';

}
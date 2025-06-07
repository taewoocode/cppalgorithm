#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pv;
vector<int> dp;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    pv.resize(n);
    dp.resize(n+1,0);
    for(int i = 0; i < n; i++){
        cin >> pv[i].first >> pv[i].second;
    }

    for(int i = n - 1; i >= 0; i--){
        int time = pv[i].first;
        int profit = pv[i].second;

        if(i + time <= n){
            dp[i] = max(dp[i + 1], profit + dp[i + time]);
        } else dp[i] = dp[i + 1];
    }
    cout << dp[0] << '\n';

    return 0;
}
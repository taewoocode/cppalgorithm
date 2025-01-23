#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    v.resize(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }


    vector<int> dp(n);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 11; i++){
         dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    for(int i = 0; i < n; i++){
        cout << dp[v[i]] << '\n';
    }


    return 0;
}
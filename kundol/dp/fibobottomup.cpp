#include<bits/stdc++.h>
using namespace std;
int dp[1004];
int main(){
    memset(dp, -1, sizeof(dp));
    int n = 10;
    dp[0] = 0;
    dp[1] = 1; 
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << '\n';

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int dp[1004];

int fibo(int n){
    if(n <= 1) return n;
    int &ret = dp[n];
    if(ret != -1) return ret;
    return ret = fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n = 10;
    memset(dp, -1, sizeof(dp));
    int ret = fibo(n);
    cout << ret << '\n';

 
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int memo[201];
int go(int n){
    if(n == 1 || n == 2) return 1;
    if(memo[n] != -1) return memo[n];

    memo[n] = (go(n - 1) + go(n - 2)) % 10009;
    return memo[n];
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main(){
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << go(n) << '\n';
    return 0;
}
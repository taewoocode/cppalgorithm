#include<bits/stdc++.h>
using namespace std;
int dp[104][2][34], n,m,b[104];

int go(int idx, int tree, int cnt){
    if(cnt < 0) return -1e9;
    if(idx == n) return 0;

    int &ret = dp[idx][tree][cnt];
    if(ret != -1) return ret;

    //현재 나무에 머무르거나, 다른 나무로 이동하는 경우 최대 값 선택 
    return ret = max(go(idx + 1, tree ^ 1, cnt - 1),go(idx + 1, tree, cnt)) + (tree == b[idx] - 1);
}

int main(){
    memset(dp, -1, sizeof(dp));
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> b[i];
    cout << max(go(0, 1, m - 1), go(0, 0, m)) << '\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pv;
int n;
int maxProfit;

void dfs(int day, int profit){

    // 종료조건 n = 퇴사일
    if(n == day){
        maxProfit = max(maxProfit, profit);
        return ;
    }

    // 상담을 하지 않는 경우
    dfs(day + 1, profit);
    
    // 상담을 하는 경우
    if(day + pv[day].first <= n){
        dfs(day + pv[day].first, profit + pv[day].second);
    }
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main(){
    fastIO();
    cin >> n;
    pv.resize(n);
    for(int i = 0; i < n; i++){
        cin >> pv[i].first >> pv[i].second;
    }
    dfs(0,0);
    cout << maxProfit << '\n';
}
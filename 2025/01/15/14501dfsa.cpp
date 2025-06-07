#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> pv;
int maxProfit;
void dfs(int day, int profit){
    if(n == day){
        maxProfit = max(profit,maxProfit);
        return ;
    }
    dfs(day + 1, profit);
    
    if(day + pv[day].first <= n){
        dfs(day + pv[day].first, profit + pv[day].second);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    pv.resize(n);
    for(int i = 0; i < n; i++){
        cin >> pv[i].first >> pv[i].second;
    }
    dfs(0,0);
    cout << maxProfit << '\n';

    return 0;
}
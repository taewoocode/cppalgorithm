#include<bits/stdc++.h>
using namespace std;
const int max_n = 10000;
int n, e[max_n], m[max_n];
int main(){
    vector<pair<int,int>> order(n);
    for(int i = 0; i < n; i++){
        cin >> order[i].first >> order[i].second;
    }

    sort(order.rbegin(), order.rend());

    int ret = 0, beginEat = 0;
    for(int i = 0; i < n; i++){
        int box = order[i].second;
        beginEat += m[box];
        ret = max(ret, beginEat + e[box]);
    }
    return ret;
}
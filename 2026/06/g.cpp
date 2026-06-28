#include<bits/stdc++.h>
using namespace std;
int n,c;
map<int,int> mp, mp_first;
int a[1004];
vector<pair<int,int>> pv;

// 1순위는 counting, 2순위는 가장먼저 나온것
/*
    그러면 a.first == b.first 가 같으면
    가장 먼저 나온 것을 비교하고? 흠 근데 왜 < 이거지
*/
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return mp_first[a.second] < mp_first[b.second];
    }
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
        if(mp_first[a[i]] == 0){
            mp_first[a[i]] = i + 1;
        }
    }
    
    for(auto it : mp){
        pv.push_back({it.second, it.first}); // second는 빈도수, first는 키값?
    }

    sort(pv.begin(), pv.end(), cmp); 

    for(auto it : pv){
        cout << it.second << " ";
    }
    
    return 0;
}
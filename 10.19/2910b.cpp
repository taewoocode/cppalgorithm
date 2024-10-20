#include<bits/stdc++.h>
using namespace std;
int n,c,a[1004];
map<int,int> mp, mp_first;
vector<pair<int,int>> pv;

bool cmp(pair<int,int> a, pair<int,int> b){
    // if(a.second == b.second){
    //     return mp_first[a.first] < mp_first[b.first];
    // }
    // return a.second > b.second;
    //pair<int,int> a -> pair<숫자,빈도수> a
    if(a.second == b.second){
        return mp_first[a.first] < mp_first[b.first];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> a[i]; //만약 3,2,1,5,4를 입력
        mp[a[i]]++;//그럼 a[0]은 3이니까 mp[3]++;이 되어서 mp[3] -> 1이 된다.

        if(mp_first[a[i]] == 0){ //i가 0일 때 mp_first[3] == 0 
            mp_first[a[i]] = i + 1; // mp_first[a[0]] -> 0 + 1 -> mp_first[3] = 1
        }
    }
    for(auto it : mp){
        pv.push_back({it.first, it.second});
    }
    sort(pv.begin(), pv.end(), cmp);

    for(auto i : pv){
        for(int j = 0; j < i.second; j++){
            cout << i.first << ' ';
        }
    }

    return 0;
}
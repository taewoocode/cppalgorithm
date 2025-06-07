#include<bits/stdc++.h>
using namespace std;
vector<string> solution(vector<string> players, vector<string> callings) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    unordered_map<string,int> mp;
    for(int i = 0; i < players.size(); i++){
        mp[players[i]] = i;
    }

    for(auto &calling : callings){
        int curIdx = mp[calling];
        if(curIdx > 0){
            string frontPlayer = players[curIdx - 1];
            swap(players[curIdx], players[curIdx - 1]);
            mp[calling] = curIdx - 1;
            mp[frontPlayer] = curIdx;
        }
    }
    return players;
}
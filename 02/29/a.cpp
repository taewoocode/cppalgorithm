#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string,int> player_map;
    //이름을 부를 때 마다 선수의 위치가 바뀐다. 
    //kai를 두번 부르면 kai가 배열에 순서에서 2번 앞당겨 진다.
    for(int i = 0; i < players.size(); i++){
        player_map[players[i]] = i;
    }
    //curIDx는 선수의 현재 위치를 저장
    for(string &calling : callings){
        int cur_idx = player_map[calling];
        if(cur_idx > 0){
            string front_player = players[cur_idx - 1];

            //선수의 현재위치와, 앞의 선수를 교환 -> 이름을 부르면 교환이 되기 때문이다.
            swap(players[cur_idx], players[cur_idx - 1]);
            player_map[calling] = cur_idx - 1;
            player_map[front_player] = cur_idx;
        }
    }

    return players;
}
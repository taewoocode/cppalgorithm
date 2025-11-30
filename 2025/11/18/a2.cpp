#include<bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> mp;
    for(int i = 0; i < participant.size(); i++){
        mp[participant[i]]++;
    }

    for(int i = 0; i < completion.size(); i--){
        mp[completion[i]]--;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it -> second > 0){
            return it -> first;
        }
    }

    
    return answer;
}
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> char_min_press;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(auto key : keymap){
        for(int i = 0; i < key.size(); i++){
            char c = key[i];
            int press_count = i + 1;
            if(char_min_press.count(c)){
                char_min_press[c] = min(char_min_press[c], press_count);
            } else {
                char_min_press[c] = press_count;
            }
        }
    }

    for(auto a : targets){
        int total = 0;
        bool can_type = true;
        for(auto c : a){
            if(char_min_press.count(c)){
                total += char_min_press[c];
            } else {
                can_type = false;
                break;
            }
        }
        answer.push_back(can_type ? total : -1);
    }

    return answer;
}


#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets){
    vector<int> answer;
    unordered_map<char,int> mp;

    for(auto key : keymap){
        for(int i = 0; i < key.size(); i++){
            char c = key[i];
            int ps_count = i + 1;
            if(mp.count(c)){
                mp[c] = min(ps_count, mp[c]);
            } else {
                mp[c] = ps_count;
            }
        }
    }

    for(auto t : targets){
        int cnt = 0;
        int check = true;
        for(char c : t){
            if(mp.count(c)){
                cnt += mp[c];
            } else {
                check = false;
                break;
            }
        }
        answer.push_back(check ? cnt : -1);
    }

    return answer;
}
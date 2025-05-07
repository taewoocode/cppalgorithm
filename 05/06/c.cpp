#include<bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> name_count;

    for(auto &a : participant){
        name_count[a]++;
    }

    for(auto &a : completion){
        name_count[a]--;
    }

    for(auto [name,count]: name_count){
        if(count > 0) return name;
    }

}


    // for(auto it = name_count.begin(); it != name_count.end(); it++){
    //     if(it -> second > 0) return it -> first;
    // }

#include<bits/stdc++.h>
using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    unordered_map<int,char> mp
    {
        {1,'w'},
        {-1,'s'},
        {10,'d'},
        {-10,'a'},
    };
    
    for(int i = 1; i < numLog.size(); i++){
        int diff = numLog[i] - numLog[i - 1];
        answer += mp[diff];
    }

    return answer;

}
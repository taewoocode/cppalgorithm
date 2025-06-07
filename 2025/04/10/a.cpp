#include<bits/stdc++.h>
using namespace std;
vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        bool isValid = true;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != '0' && s[i] != '5'){
                isValid = false;
                break;
            }
        }
        
        if(isValid){
            answer.push_back(i);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}

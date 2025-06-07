#include<bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int n = names.size();
    for(int i = 0; i < n; i++){
        if(i % 5 == 0){
            answer.push_back(names[i]);
        }
    }
    return answer;
}
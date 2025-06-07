#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i = 0; i < intStrs.size(); i++) {
        string stringIdx = intStrs[i].substr(s, l); 
        if(stoi(stringIdx) > k) { 
            answer.push_back(stoi(stringIdx)); 
        }
    }
    return answer;
}

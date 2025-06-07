#include<bits/stdc++.h>
using namespace std;

vector<int> firstPattern {1,2,3,4,5};
vector<int> secondPattern {2,1,2,3,2,4,2,5};
vector<int> thirdPattern {3,3,1,1,2,2,4,4,5,5};
vector<int> solution(vector<int> answers){
    vector<int> answer;
    vector<int> cnt(3);
    for(int i = 0; i < answers.size(); i++){
        if(answer[i] == firstPattern[i % firstPattern.size()]) cnt[0]++;
        if(answer[i] == secondPattern[i % secondPattern.size()]) cnt[1]++;
        if(answer[i] == thirdPattern[i % thirdPattern.size()]) cnt[2]++;
    }

    int maxScore = *max_element(cnt.begin(), cnt.end());
    for(int i = 0; i < 3; i++){
        if(cnt[i] == maxScore){
            answer.push_back(i + 1);
        }
    }
    return answer;
}
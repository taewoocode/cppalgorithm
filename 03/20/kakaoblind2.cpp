#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,float> a, pair<int,float> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<float> fail(N+2,0.0);
    vector<float> challenger(N+2,0);
    for(int i = 0; stages.size(); i++){
        for(int j = 1; stages[i]; j++){
            challenger[j]++;
        }
        fail[challenger[i]]++;
    }
    vector<pair<int,float>> failRatio(N);
    for(int i = 0; i < N; i++){
        failRatio[i].first = i + 1;
        if(challenger[i + 1] == 0){
            failRatio[i].second = 0;
        } else {
            //실패율 계산
            failRatio[i].second = fail[i + 1] / challenger[i + 1];
        }
    }
    for(int i = 0; i < N; i++){
        answer.push_back(failRatio[i].first);
    }
    return answer;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> solution(int k, vector<int> score){
    vector<int> answer;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i : score){
        pq.push(i);
        if(pq.size() > k){
            pq.pop();
        }
        answer.push_back(pq.top());
    }
    return answer;
}
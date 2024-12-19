#include<bits/stdc++.h>
using namespace std;
int solution(vector<string> want, vector<int> number, vector<string> discount){
    int answer = 0;
    unordered_map<string,int> wantMap;

    for(int i = 0; i < want.size(); i++){
        wantMap[want[i]] = number[i];
    }
    for(int i = 0; i < discount.size() - 9; i++){
        unordered_map<string,int> discount_10d;
        for(int j = i; j < 10; j++){
            discount_10d[discount[j]]++;
        }
        if(wantMap == discount_10d){
            answer++;
        }
    }
}
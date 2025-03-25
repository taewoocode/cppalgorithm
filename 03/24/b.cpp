#include<bits/stdc++.h>
using namespace std;
vector<string> solution(string myString){
    vector<string> answer;
    int startIdx = 0;
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
            //x를 만나면
            //일단 시작인데스부터 시작하다가 x를 만나면 x를 만난곳부터 만약에 3이라면 (0 3)이니까 0부터 3개의 문자까지
            answer.push_back(myString.substr(startIdx, i - startIdx));
        }
        startIdx = i + 1;
    }
    if(startIdx < myString.size()){
        answer.push_back(myString.substr(startIdx));
    }
    sort(answer.begin(), answer.end());
    return answer;
}
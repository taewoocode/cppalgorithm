#include<bits/stdc++.h>
using namespace std;
vector<int> solution(int n, vector<string> words){
    //중복을 체크하는 것이 핵심이다.
    //순서가 중요하지 않다. 어떤 자료구조 사용?
    vector<int> answer(2,0);
    unordered_set<string> st;
    st.insert(words[0]);
    for(int i = 0; i < st.size(); i++){
        if(!st.insert(words[i]).second || words[i].front() != words[i -1].back()){
            answer[0] = i % n + 1;
            answer[1] = i / n + 1;
            return answer;
        }
    }
    return answer;

}
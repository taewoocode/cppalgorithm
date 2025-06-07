#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices){

    vector<int> answer(prices.size());
    stack<int> st;
    
    for(int i = 0; i < prices.size(); i++){
        while(!st.empty() && prices[st.top()] > prices[i]){
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }


    while(!st.empty()){
        answer[st.top()] = prices.size() - st.top() - 1;
        st.pop();
    }
    return answer;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices){
    // 주식 가격이 담길 벡터 answer 생성
    vector<int> answer(prices.size());
    
    // 가격의 인덱스를 저장할 스택 생성
    stack<int> st;
    
    // prices 벡터의 각 가격을 순차적으로 확인
    for(int i = 0; i < prices.size(); i++){
        // 스택이 비어있지 않고, 스택의 최상단 인덱스의 가격이 현재 가격보다 크다면
        while(!st.empty() && prices[st.top()] > prices[i]){
            // 스택의 최상단 인덱스를 꺼내서, 주식이 떨어진 시간을 기록
            answer[st.top()] = i - st.top();
            // 가격이 떨어졌으므로 스택에서 제거
            st.pop();
        }
        // 현재 인덱스를 스택에 추가
        st.push(i);
    }

    // 아직 스택에 남아 있는 가격들에 대해, 가격이 끝까지 떨어지지 않아서 마지막까지 유지된 시간을 기록
    while(!st.empty()){
        // 스택의 최상단 인덱스를 꺼내서, 마지막까지 떨어지지 않아서 유지된 시간을 기록
        answer[st.top()] = prices.size() - st.top() - 1;
        // 스택에서 제거
        st.pop();
    }
    
    // 결과 반환
    return answer;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices){

    vector<int> answer;
    stack<int> s;

    for(int i = 0; i < prices.size(); i++){
        while(!s.empty() && prices[s.top()] > prices[i]){
            //현재 인덱스와 과거 인덱스를 비교
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){
        answer[s.top()] = prices.size() - s.top() - 1;
        s.pop();
    }
    return answer;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> answer;
stack<int> st;

vector<int> solution(vector<int> prices) {
    answer.resize(prices.size());
    for(int i = 0; i < prices.size(); i++){
        // 스택이 비어있지 않고, 가격이 
        while(!st.empty() && prices[st.top()] > prices[i]){
            answer[st.top()] = i - st.top();
            st.pop();
        }
        for(int i = 0; i < st.size(); i++){
            cout << answer[i] << ' ';
        }
        st.push(i);
    }
    return answer;
}


#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices){

    // 결과를 저장할 벡터. 초기값은 0으로 채워짐.
    vector<int> answer(prices.size());

    // 가격이 떨어지지 않은 기간을 계산하기 위한 인덱스를 저장하는 스택
    stack<int> st;
    
    // prices를 순회하며 각 시점에서 가격이 떨어지는 시점을 찾는다.
    for(int i = 0; i < prices.size(); i++){
        // 스택이 비어있지 않고, 현재 가격이 스택의 top 인덱스에 해당하는 가격보다 낮다면
        while(!st.empty() && prices[st.top()] > prices[i]){
            // 가격이 떨어진 시점이므로 유지 기간을 계산
            answer[st.top()] = i - st.top();
            // 해당 인덱스는 처리되었으므로 스택에서 제거
            st.pop();
        }
        // 현재 인덱스를 스택에 저장
        st.push(i);
    }

    // 스택에 남아있는 인덱스는 가격이 끝까지 떨어지지 않은 경우
    while(!st.empty()){
        // 끝까지 가격이 떨어지지 않았으므로 전체 기간 - 현재 인덱스 - 1
        answer[st.top()] = prices.size() - st.top() - 1;
        st.pop();
    }

    return answer;
}

















#include<bits/stdc++.h>
using namespace std;
vector<int> answer;
stack<int> st;

vector<int> solution(vector<int> prices){
    answer.resize(prices.size());
    
    
    // for(int i = 0; i < prices.size(); i++){
    //     while(!st.empty() && prices[st.top()] > prices[i]){
    //         answer[st.top()] = i - st.top();
    //         st.pop();
    //     }
    //     st.push(i);
    // }

    while(!st.empty()){
        answer[st.top()] = prices.size() - st.top() - 1;
        st.pop();
    }
    return answer;
}
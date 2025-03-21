#include<bits/stdc++.h>
using namespace std;
int solution(string s){
    stack<int> st;
    for(int i = 0; i < s.size(); i++){
        if(st.empty() || st.top() != s[i]){
            st.push(s[i]);
        } else {
            st.pop();
        }
    }

    return st.empty();
}
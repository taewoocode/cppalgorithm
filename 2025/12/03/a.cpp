#include<bits/stdc++.h>
using namespace std;
stack<int> stk;

string solution(int decimal){
    
    if(decimal == 0) return "0";
    string result = "";
    while(decimal > 0){
        stk.push(decimal % 2);
        decimal /= 2;
    }

    while(!stk.empty()){
        result += to_string(stk.top());
        stk.pop();
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    string ret = solution(n);
    cout << ret << '\n';
}


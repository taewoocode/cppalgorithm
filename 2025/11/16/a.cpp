#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> stk;
    int n = ingredient.size();
    //1 »§ 2 ¾ßÃ¤ 3 °í±â 1»§
    for(int i = 0; i < n; i++){
        stk.push(ingredient[i]);
        if(stk.size() >= 4){
            int a,b,c,d;
            d = stk.top(); stk.pop();
            c = stk.top(); stk.pop();
            b = stk.top(); stk.pop();
            a = stk.top(); stk.pop();

            if(a == 1 && b == 2 && c == 3 && d == 1){
                answer++;
            } else {
                stk.push(a);
                stk.push(b);
                stk.push(c);
                stk.push(d);
            }
        }
    }

    return answer;
}
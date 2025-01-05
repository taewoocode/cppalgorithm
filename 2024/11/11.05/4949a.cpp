#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> stk;
    for (auto c : s) {
        if (c == '(' || c == '[') {
            stk.push(c); 
        } 
        else if (c == ')' || c == ']') {
            if (!stk.empty() && ((c == ')' && stk.top() == '(') || (c == ']' && stk.top() == '['))) {
                stk.pop(); 
            } 
            else {
                return false; 
            }
        }
    }
    return stk.empty(); 
}

int main() {
    string s;
    while (true) {
        getline(cin, s); 
        if (s == ".") break; 
        if (check(s)) {
            cout << "yes" << '\n'; 
        } else {
            cout << "no" << '\n'; 
        }
    }
    return 0;
}

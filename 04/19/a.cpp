#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size() << ' '; //3
    cout << s.top() << ' ';
    cout << '\n';
    s.pop(); 
    cout << s.top() << '\n'; //20
    s.pop();
    cout << s.top() << '\n'; //10




    return 0;
}
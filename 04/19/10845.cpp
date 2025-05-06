#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main(void){
    ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "push"){
            int val;
            cin >> val;
            q.push(val);
        } else if(s == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if(s == "size"){
            cout << q.size() << '\n';
        } else if(s == "empty"){
            cout << q.empty() << '\n';
        } else if(s == "front"){
            if(q.empty()) cout << -1 << '\n';
            cout << q.front() << '\n';
        } else if(s == "back"){
            if(q.empty()) cout << -1 << '\n';
            cout << q.back() << '\n';
            q.pop();
        }
    }
    return 0;
}
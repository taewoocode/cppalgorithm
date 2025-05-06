#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string c;
        cin >> c;
        if(c == "push"){
            int t;
            cin >> t;
            s.push(t);
        } 
        else if(c == "pop"){
            if(s.empty()){
                cout << - 1 << '\n';
            } else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if(c == "size"){
            cout << s.size() << '\n';
        } else if(c == "empty"){
            cout << s.empty() << '\n';
        } else {
            if(s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }

    }

}
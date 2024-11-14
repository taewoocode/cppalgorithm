#include<bits/stdc++.h>
using namespace std;
int n;
stack<int> st;
int main(){
    cin >> n;
    while(n--){
        string command;
        cin >> command;
        if(command == "push"){
            int x;
            cin >> x;
            st.push(x);
        } else if(command =="pop"){
           if(st.empty()){
            cout << -1 << '\n';
           } else {
            cout << st.top() << '\n';
            st.pop();
           }
        } else if(command == "size"){
            cout << st.size() << '\n';
        } else if(command == "empty"){
            cout << (st.empty() ? 1 : 0) << '\n';

        } else if(command == "top") {
            if(st.empty()){
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
            }
        }
    }
    return 0;
}
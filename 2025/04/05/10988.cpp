#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    string temp = s;
    reverse(s.begin(), s.end());
    if(s == temp){
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    
    return 0;
}
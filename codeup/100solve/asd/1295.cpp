#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            s[i] = isupper(s[i]);
        } else if(isupper(s[i])){
            s[i] = islower(s[i]);
        }
    }
    cout << s << '\n';
    return 0;
}
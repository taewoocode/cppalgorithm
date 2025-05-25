#include<bits/stdc++.h>
using namespace std;
string ret = "";
int main(){
    string s;
    getline(cin,s);
    for(auto c : s){
        if(c == ' '){
            ret += ' ';
            continue;
        }

        char shifted = c - 3;
        if(shifted < 'a'){
            shifted += 26;
        }
        ret += shifted;
    }
    cout << ret << '\n';
    return 0;
}
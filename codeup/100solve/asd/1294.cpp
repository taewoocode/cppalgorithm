#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string result = "";
    getline(cin,s);
    for(auto c : s){
        if(islower(c)){
            c = (c - 'a' + 3) % 26 + 'a';
        }
        result += c;
    }
    cout << s << '\n';


    return 0;
}
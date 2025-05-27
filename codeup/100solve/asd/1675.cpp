#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    getline(cin ,s);
    for(auto c : s){
        if(c == ' '){
            cout << ' ';
        } else {
            char shifted = c - 3;
            if(shifted < 'a'){
                shifted += 26;
            }
            cout << shifted;
        }

    }

    return 0;
}
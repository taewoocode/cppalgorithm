#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s2 = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 0; i < s2.size(); i++){
        cout << (int)s.find(s2[i]) << ' ';
    }

    return 0;
}
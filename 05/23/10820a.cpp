#include<bits/stdc++.h>
using namespace std;
int cnt[4];
string s;
int main(){
    cin >> s;
    while(getline(cin,s)){
        fill(cnt, cnt + 4, 0);
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] <= 'z') cnt[0]++;
        }
    }
    





    return 0;
}
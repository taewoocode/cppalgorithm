#include<bits/stdc++.h>
using namespace std;
int cnt[4];
int main(){
    string s;
    while(getline(cin, s)){
        fill(cnt, cnt + 4, 0);
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] && s[i] <= 'z') cnt[0]++;
            else if('A' <= s[i] && s[i] <= 'Z') cnt[1]++;
            else if('0' <= s[i] && s[i] <= '9') cnt[2]++;
            else if(s[i] == ' ') cnt[3]++;
        }   
        for(int i = 0; i < 4; i++){
            cout << cnt[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
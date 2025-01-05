#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int maxCount = 0;     
char maxChar = '?';   
bool duplicate = false; 

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        char c = tolower(s[i]);
        cnt[c - 'a']++; // cnt[b - 'a'] -> cnt[98 - 97] -> cnt[1]++; 
    }
    for(int i = 0; i < 26; i++){
        if(cnt[i] > maxCount){ 
            maxCount = cnt[i];
            maxChar = 'A' + i;
            duplicate = false;
        } else if(cnt[i] == maxCount){
            duplicate = true;
        }
    }
    if(duplicate) cout << '?' << '\n';
    else cout << maxChar << '\n';
    return 0;
}
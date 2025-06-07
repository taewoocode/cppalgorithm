#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int ret;
string s;
int main(){
    cin >> s;
    for (int i = 0; i < s.size(); i++){
    ret = cnt[s[i] - 'a']++;
    cout << ret << ' '; 
    }
    return 0;
}

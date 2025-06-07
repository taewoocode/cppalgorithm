#include<bits/stdc++.h>
using namespace std;
int cnt[26];
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        cnt[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << cnt[i] << ' ';
    }


    return 0;
}
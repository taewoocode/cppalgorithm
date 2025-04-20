#include<bits/stdc++.h>
using namespace std;
int cnt[26];

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        cnt[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << cnt[i] << " ";
    }   
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    for(int i = 0; i < 26; i++){
        int cnt = 0;
        for(auto c : s){
            if(s[i] == c){
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
}
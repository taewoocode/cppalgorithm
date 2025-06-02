#include <bits/stdc++.h>
using namespace std;

int cnt[26];
string s;

int main() {
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cnt[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << ":" << cnt[i] << '\n';
    }

    return 0;
}






#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[26];
int main(){
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cnt[s[i - 'a']]++;
        }
    }

    for(int i = 0; i < s.size(); i++){
        cout << char('a' + i) << ":" << cnt[i] << ']n';
    }

    return 0;
}

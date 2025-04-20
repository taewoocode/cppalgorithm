#include<bits/stdc++.h>
using namespace std;
int cnt[26];
string s;

int countChar(string s){
    int answer = 0;
    for(char a = 'a'; a <= 'z'; a++){
        int cnt = 0;
        for(auto c : s){
            if(a == c) cnt++;
        }
        if(cnt > 0) answer++;
    }
    return answer;
}

int main(){

    int ret = countChar("backjoon");
    cout << ret;

    return 0;
}


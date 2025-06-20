#include<bits/stdc++.h>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skip_set(skip.begin(), skip.end());
    for(auto c : s){
        char ch = c;
        int count = 0;
        while(count < index){
            ch++;
            if(ch > 'z') ch = 'a';
            if(skip_set.count(ch)) continue;
            count++;
        }
        answer += ch;
    }
    
    
    return answer;
}


#include <bits/stdc++.h>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skip_set(skip.begin(), skip.end());

    for (char c : s) {
        int count = 0;
        char ch = c;

        while (count < index) {
            ch++; // 다음 알파벳으로
            if (ch > 'z') ch = 'a'; // z 넘어가면 다시 a로

            if (skip_set.count(ch)) continue; // skip 문자면 무시
            count++;
        }

        answer += ch;
    }

    return answer;
}

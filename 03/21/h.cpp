#include<bits/stdc++.h>
using namespace std;
int solution(string s){
    int answer = 0;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    answer = sum % 9;
    return answer;
}
#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    string answer = ""; // 결과를 저장할 문자열
    for(int i = 0; i < myString.size(); i++) {
        if(myString[i] < 'l') {  
            answer += 'l';  // 'l'보다 작은 문자는 'l'로 변환하여 추가
        } else {
            answer += myString[i];  // 나머지 문자는 그대로 추가
        }
    }
    return answer; // 최종 결과 반환
}

#include<bits/stdc++.h>
using namespace std;

int solution(string s) {
    int answer = 0;  // 분리된 문자열 개수를 저장하는 변수
    int cnt = 0;  // x와 같은 글자의 개수를 세는 변수
    auto x = s[0];  // 첫 번째 글자를 x로 설정
    int otherCnt = 0;  // x와 다른 글자의 개수를 세는 변수

    // 문자열의 각 글자를 순차적으로 탐색
    for(int i = 0; i < s.size(); i++){
        // 현재 글자가 x와 같은 경우
        if(x == s[i]){
            cnt++;  // x와 같은 글자 개수 증가
        } else {
            otherCnt++;  // x와 다른 글자 개수 증가
        }

        // x와 다른 글자의 개수가 같아졌을 때 문자열을 분리
        if(cnt == otherCnt){
            answer++;  // 분리된 문자열 개수 증가

            // 아직 남은 문자열이 있다면 다음 글자를 새로운 x로 설정
            if(i + 1 < s.size()){
                x = s[i + 1];  // 다음 글자를 기준으로 설정
            }

            // 다음 구간을 위해 cnt와 otherCnt를 초기화
            cnt = 0;
            otherCnt = 0;
        }
    }

    // 남은 문자열이 있으면 한 번 더 분리
    if(cnt != 0 || otherCnt != 0){
        answer++;  // 남은 부분 처리
    }
    
    return answer;  // 최종 분리된 문자열 개수 반환
}

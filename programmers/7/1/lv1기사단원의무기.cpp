#include<bits/stdc++.h>
using namespace std;
int cnt;
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0; // 최종 결과: 필요한 철의 총 무게

    // 1번 기사부터 number번 기사까지 반복
    for(int i = 1; i <= number; ++i) {
        int count = 0; // i번 기사의 약수 개수

        // i의 약수 개수를 구하는 반복문
        for(int j = 1; j * j <= i; ++j) {
            if(i % j == 0) { // j가 i의 약수일 경우
                if(i / j == j) count++;   // √i인 경우 중복 없이 1개만 추가
                else count += 2;          // j와 (i / j) 두 개의 약수 추가
            }
        }

        // limit보다 약수 개수가 많으면 power로 대체
        if(count > limit) {
            answer += power;
        } else {
            answer += count;
        }
    }

    return answer; // 최종 철 무게 합 반환
}

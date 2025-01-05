#include<bits/stdc++.h>
using namespace std;

// 전역 변수 선언
int n; // 학생의 수
bool areFriends[10][10]; // 친구 관계를 나타내는 배열, areFriends[i][j]가 true면 i와 j가 친구임

// 짝을 짓는 조합의 수를 계산하는 함수
int countPairings(bool taken[10]) {
    int firstFree = -1; // 짝이 정해지지 않은 첫 번째 학생의 인덱스
    
    // 첫 번째로 짝이 정해지지 않은 학생을 찾는다.
    for (int i = 0; i < n; i++) {
        if (!taken[i]) { // taken[i]가 false이면 해당 학생은 아직 짝이 없음
            firstFree = i; // 첫 번째 짝이 없는 학생의 인덱스 저장
            break; // 찾았으므로 반복문 종료
        }
    }
    
    // 모든 학생이 짝이 지어졌으면 1을 반환 (모든 조합이 만들어진 경우)
    if (firstFree == -1) return 1;
    
    int ret = 0; // 가능한 짝짓기 조합의 수를 저장하는 변수
    
    // firstFree 이후의 학생들과 짝을 짓는다.
    for (int pairWith = firstFree + 1; pairWith < n; pairWith++) {
        // pairWith 학생이 짝이 없고, firstFree와 친구라면 짝을 짓는다.
        if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
            // firstFree와 pairWith를 짝지음
            taken[firstFree] = taken[pairWith] = true;
            
            // 나머지 학생들에 대해 재귀 호출
            ret += countPairings(taken);
            
            // 재귀 호출 후, 다시 상태를 원래대로 되돌림 (백트래킹)
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    
    return ret; // 가능한 짝짓기 조합의 수 반환
}
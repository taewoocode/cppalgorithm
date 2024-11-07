#include <bits/stdc++.h>
using namespace std;

// 피보나치 수열에서 0과 1이 출력되는 횟수를 저장할 배열
// 0번째 피보나치 수일 때 0은 1번, 1은 0번 출력됨
int zeroCount[41] = {1, 0};  // zeroCount[i]는 피보나치 수 i에서 0이 출력되는 횟수
int oneCount[41] = {0, 1};   // oneCount[i]는 피보나치 수 i에서 1이 출력되는 횟수

// 피보나치 수열에서 각 숫자마다 0과 1이 몇 번 출력되는지 미리 계산
void precomputeFibo() {
    for (int i = 2; i <= 40; i++) {  // 피보나치 수열 2번째부터 40번째까지 반복
        zeroCount[i] = zeroCount[i - 1] + zeroCount[i - 2];  // F(n) = F(n-1) + F(n-2)와 같이 누적 계산
        oneCount[i] = oneCount[i - 1] + oneCount[i - 2];     // F(n)의 1 출력 횟수 = F(n-1) + F(n-2)의 1 출력 횟수 합
    }
}

int main() {
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL), cout.tie(NULL);    // 입출력 속도 최적화

    precomputeFibo();  // 피보나치 수열의 각 숫자에 대해 0과 1이 출력되는 횟수를 미리 계산

    int t;  // 테스트 케이스 개수
    cin >> t;
    while (t--) { // t개의 테스트 케이스 처리
        int n;
        cin >> n;
        cout << zeroCount[n] << " " << oneCount[n] << '\n';  // n번째 피보나치에서 0과 1의 출력 횟수 출력
    }
    
    return 0;
}

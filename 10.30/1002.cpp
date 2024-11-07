#include <bits/stdc++.h> // C++ 표준 라이브러리와 관련된 헤더 파일을 포함
using namespace std; // 표준 네임스페이스를 사용

int main() {
    int t; // 테스트 케이스 수를 저장할 변수
    cin >> t; // 테스트 케이스 수 입력

    // 각 테스트 케이스에 대해 반복
    for (int i = 0; i < t; i++) {
        int x1, y1, r1; // 첫 번째 원의 중심 (x1, y1)과 반지름 r1
        int x2, y2, r2; // 두 번째 원의 중심 (x2, y2)과 반지름 r2
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2; // 각 원의 중심과 반지름 입력

        // 두 원의 중심 간 거리 계산
        double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); 
        // pow(x, y)는 x의 y 제곱을 계산
        // sqrt(x)는 x의 제곱근을 계산

        // 두 원의 중심이 같을 때
        if (x1 == x2 && y1 == y2) { 
            if (r1 == r2) {
                cout << -1 << '\n'; // 무한대의 교차점 (같은 원)
            } else {
                cout << 0 << '\n'; // 교차점 없음 (같은 중심, 다른 반지름)
            }
        } else {
            int rSum = r1 + r2; // 두 원의 반지름 합
            int rDiff = abs(r1 - r2); // 두 원의 반지름 차이, abs(x)는 x의 절대값을 반환

            // 원들이 떨어져 있을 때
            if (distance > rSum) {
                cout << 0 << '\n'; // 원들이 서로 떨어져 있음
            } 
            // 원들이 외접하는 경우
            else if (distance == rSum) {
                cout << 1 << '\n'; // 원들이 외접
            } 
            // 한 원이 다른 원 안에 있을 때
            else if (distance < rDiff) {
                cout << 0 << '\n'; // 한 원이 다른 원 안에 있음
            } 
            // 원들이 내접하는 경우
            else if (distance == rDiff) {
                cout << 1 << '\n'; // 원들이 내접
            } 
            // 두 원이 두 점에서 교차하는 경우
            else {
                cout << 2 << '\n'; // 두 점에서 교차
            }
        }
    }
    return 0; // 프로그램 종료
}

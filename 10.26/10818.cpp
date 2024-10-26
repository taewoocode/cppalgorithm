#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // 정수의 개수 N 입력

    int retmin = INT_MAX; // 최소값 초기화
    int retmax = INT_MIN; // 최대값 초기화

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; // 정수 입력
        retmin = min(retmin, a); // 최소값 갱신
        retmax = max(retmax, a); // 최대값 갱신
    }

    cout << retmin << " " << retmax << '\n'; // 최솟값과 최댓값 출력
    return 0;
}

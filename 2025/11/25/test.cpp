#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cout << "Enter number: " << '\n'; // 버퍼에 저장
    cout << "HEllO";
    cin >> x;                  // 입력 전 자동 flush → 화면에 "Enter number:" 즉시 출력
    cout << "You entered: " << x << endl;
}

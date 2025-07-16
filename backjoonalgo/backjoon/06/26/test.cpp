#include<bits/stdc++.h>
using namespace std;
int cnt;  // 전역변수

void foo() {
    int cnt = 5;   // foo 함수 내 지역변수 cnt
}

int main() {
    foo();
    cout << cnt << '\n';  // 전역변수 cnt 출력 -> 0
}

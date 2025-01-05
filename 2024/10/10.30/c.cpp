#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 1; // 초기 num 값
    int sum = 1; // 초기 sum 값

    // sum += num % 10; 연산 결과만 출력
    sum += num % 10; // sum에 num의 마지막 자리 수를 더함
    cout << sum; // 결과 출력
    cout << '\n';
    num += num % 10; // sum에 num의 마지막 자리 수를 더함
    cout << num;
    cout << '\n';

    int m = 5; // m의 값 설정
    int ret = 0; // 초기 ret 값 설정

    // ret += m - 1; 연산 수행
    ret += m - 1; // ret에 m - 1 값을 더함
    ret = ret + (m - 1);
    cout << ret;
    cout << '\n';
    cout << ret; // 결과 출력


    return 0;
}

// 1부터 6까지 숫자가 적힌 주사위가 네 개 있습니다. 네 주사위를 굴렸을 때 나온 숫자에 따라 다음과 같은 점수를 얻습니다.

// 네 주사위에서 나온 숫자가 모두 p로 같다면 1111 × p점을 얻습니다.
// 세 주사위에서 나온 숫자가 p로 같고 나머지 다른 주사위에서 나온 숫자가 q(p ≠ q)라면 (10 × p + q)2 점을 얻습니다.
// 주사위가 두 개씩 같은 값이 나오고, 나온 숫자를 각각 p, q(p ≠ q)라고 한다면 (p + q) × |p - q|점을 얻습니다.
// 어느 두 주사위에서 나온 숫자가 p로 같고 나머지 두 주사위에서 나온 숫자가 각각 p와 다른 q, r(q ≠ r)이라면 q × r점을 얻습니다.
// 네 주사위에 적힌 숫자가 모두 다르다면 나온 숫자 중 가장 작은 숫자 만큼의 점수를 얻습니다.
// 네 주사위를 굴렸을 때 나온 숫자가 정수 매개변수 a, b, c, d로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.

#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;

    // 1. 4개가 다 같은 경우
    if (a == b && b == c && c == d) {
        return 1111 * a;
    }

    // 2. 3개가 같은 경우
    if (a == b && b == c) return (10 * a + d) * (10 * a + d);
    if (a == b && b == d) return (10 * a + c) * (10 * a + c);
    if (a == c && c == d) return (10 * a + b) * (10 * a + b);
    if (b == c && c == d) return (10 * b + a) * (10 * b + a);

    // 3. 2개씩 같은 경우
    if (a == b && c == d) return (a + c) * abs(a - c);
    if (a == c && b == d) return (a + b) * abs(a - b);
    if (a == d && b == c) return (a + b) * abs(a - b);

    // 4. 2개만 같은 경우
    if (a == b) return c * d;
    if (a == c) return b * d;
    if (a == d) return b * c;
    if (b == c) return a * d;
    if (b == d) return a * c;
    if (c == d) return a * b;

    // 5. 전부 다 다른 경우
    answer = min({a, b, c, d});
    return answer;
}

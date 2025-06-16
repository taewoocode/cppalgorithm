#include <iostream>
using namespace std;

// 원 둘레 위에서 x가 start에서 end 사이에 있는지 (시계방향 기준)
bool isBetween(int x, int start, int end) {
    if (start <= end) {
        return x > start && x < end;
    } else {
        return x > start || x < end;
    }
}

int main() {
    int a, b, c, d;
    // 두 줄 입력 받을 경우
    cin >> a >> b;
    cin >> c >> d;

    // 두 칼질 (a,b) 와 (c,d)가 교차하는 조건
    bool cond1 = (isBetween(c, a, b) != isBetween(d, a, b));
    bool cond2 = (isBetween(a, c, d) != isBetween(b, c, d));

    if (cond1 && cond2) {
        cout << "cross\n";  // 교차함
    } else {
        cout << "not cross\n";  // 교차하지 않음
    }

    return 0;
}

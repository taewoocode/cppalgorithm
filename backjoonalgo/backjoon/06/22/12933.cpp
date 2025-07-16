#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<int> ducks; // 각 오리의 현재 진행 단계 저장 (0~4)
    int answer = 0;

    for (char c : s) {
        int stage = string("quack").find(c);
        if (stage == -1) {
            cout << -1 << '\n';
            return 0;
        }

        bool found = false;
        for (int &d : ducks) {
            if (d == stage - 1) { // 이 문자를 낼 차례인 오리 발견
                d = stage;
                found = true;
                if (stage == 4) d = -1; // 울음 끝난 오리 초기화
                break;
            }
        }

        if (!found) {
            if (stage == 0) {
                ducks.push_back(0);
            } else {
                cout << -1 << '\n'; // 'q' 없이 진행하는 문자 있음
                return 0;
            }
        }
    }

    for (int d : ducks) {
        if (d != -1) {
            cout << -1 << '\n'; // 완성 안된 울음 있음
            return 0;
        }
    }

    // 동시에 울고 있는 오리 수 = 벡터 크기 - (완료된 오리 개수)
    cout << ducks.size() << '\n';

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

string s;
int lcnt, vcnt;

// isVowel 함수에서 int 타입을 유지하고, 조건식을 올바르게 수정
bool isVowel(int idx) {
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        cin >> s;  // 입력 받음
        if (s == "end") break;  // 입력이 'end'일 경우 종료

        lcnt = vcnt = 0;
        bool flag = 0;
        bool is_include_v = 0;
        int prev = -1;

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i];  // s[i]는 ASCII 코드 값이므로 int로 처리

            if (isVowel(idx)) {
                lcnt++;
                vcnt = 0;
                is_include_v = 1;  // 모음이 포함된 경우 표시
            } else {
                lcnt = 0;
                vcnt++;
            }

            // 모음 또는 자음이 연속 3번일 경우
            if (vcnt == 3 || lcnt == 3) {
                flag = 1;
            }

            // 동일한 문자가 연속 2번, 단 'e'나 'o'는 예외
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) {
                flag = 1;
            }

            prev = idx;  // 이전 문자 저장
        }

        // 모음이 포함되지 않은 경우
        if (is_include_v == 0) {
            flag = 1;
        }

        // 결과 출력
        if (flag) {
            cout << "<" << s << "> is not acceptable.\n";
        } else {
            cout << "<" << s << "> is acceptable.\n";
        }
    }

    return 0;
}

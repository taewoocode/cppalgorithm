#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> v(26, 0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // 한 줄씩 입력을 받으면서 처리
    while (getline(cin, s)) {
        for (auto c : s) {
            if (isalpha(c)) {  // c는 알파벳인지 확인
                v[c - 'a']++;
            }
        }
    }

    // 최대 출현 빈도수 찾기
    int max_n = 0;
    for (int i = 0; i < 26; i++) {
        max_n = max(max_n, v[i]);
    }

    // 가장 많이 나온 문자 출력
    for (int i = 0; i < 26; i++) {
        if (v[i] == max_n) {
            cout << char(i + 'a');
        }
    }

    return 0;
}

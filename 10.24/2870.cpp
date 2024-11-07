#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;
string s, ret;

void go() {
    // 선행 0 제거
    while (ret.size() && ret.front() == '0') {
        ret.erase(ret.begin());
    }
    if (ret.size() == 0) {
        ret = "0";  // 빈 문자열이면 "0"으로 설정
    }
    v.push_back(ret);
    ret = "";  // ret 초기화
}

bool cmp(const string &a, const string &b) {
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main() {
    cin >> n;  // 숫자 입력
    for (int i = 0; i < n; i++) {
        cin >> s;  // 문자열 입력
        ret = "";
        for (int j = 0; j < s.size(); j++) {
            // s[j]가 ASCII 65 미만이면
            if (s[j] < 65) {
                ret += s[j];  // 숫자를 ret에 추가
            } else if (ret.size()) {
                go();  // 숫자 그룹이 끝나면 go 호출
            }
        }
        if (ret.size()) {
            go();  // 마지막에 남은 ret 처리
        }
    }
    
    sort(v.begin(), v.end(), cmp);  // 정렬
    for (const string &i : v) {
        cout << i << '\n';  // 출력
    }
    
    return 0;
}

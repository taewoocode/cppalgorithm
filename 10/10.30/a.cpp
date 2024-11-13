#include <bits/stdc++.h>
using namespace std;

void printPicked(const vector<int>& picked) {
    for (int i : picked) {
        cout << i << " ";
    }
    cout << '\n';
}

void pick(int n, vector<int>& picked, int toPick) {
    if (toPick == 0) {
        printPicked(picked);
        return;
    }

    int smallest = picked.empty() ? 0 : picked.back() + 1;
    for (int i = smallest; i < n; i++) {
        picked.push_back(i);
        pick(n, picked, toPick - 1);
        picked.pop_back();
    }
}

int main() {
    int n = 5; // 예시로 5개의 원소 중에서
    int toPick = 3; // 3개를 선택하는 경우
    vector<int> picked;
    pick(n, picked, toPick);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int a[1004][1004];

int main() {
    int n, m;
    cin >> n >> m;
    int num = 1;

    for (int j = m - 1; j >= 0; j--) {        // 열 오른쪽 끝부터 왼쪽으로
        for (int i = n - 1; i >= 0; i--) {    // 행 아래 끝부터 위로
            a[i][j] = num++;
        }
    }

    // 출력은 행 0부터 n-1, 열 0부터 m-1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
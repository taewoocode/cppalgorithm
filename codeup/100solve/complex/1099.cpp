#include <bits/stdc++.h>
using namespace std;

int a[10][10];

int main() {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cin >> a[i][j];
        }
    }

    int x = 1, y = 1; // (2,2)를 0-based로 표현
    while (true) {
        if (a[x][y] == 2) {
            a[x][y] = 9;
            break; // 먹이 찾으면 종료
        }

        a[x][y] = 9;

        if (a[x][y+1] != 1) { // 오른쪽으로 이동 가능하면 이동
            y++;
        } else if (a[x+1][y] != 1) { // 오른쪽 불가, 아래로 이동 가능하면 이동
            x++;
        } else { // 오른쪽, 아래 모두 막혔으면 종료
            break;
        }
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

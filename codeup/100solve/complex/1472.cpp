#include <iostream>
using namespace std;

int main() {
    int Arr[101][101] = {};
    
    int n, m;
    cin >> n >> m;
    int x = 1;

    for (int i = n; i >= 1; i--) {
        if ((n - i) % 2 == 0) { // 줄 번호를 0부터 시작한다고 보면 짝수줄
            for (int j = m; j >= 1; j--) {
                Arr[i][j] = x++;
            }
        } else { // 홀수줄
            for (int j = 1; j <= m; j++) {
                Arr[i][j] = x++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

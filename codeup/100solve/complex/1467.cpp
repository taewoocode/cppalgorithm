#include <bits/stdc++.h>
using namespace std;
int a[1004][1004];
int main(){
    int n,m;
    cin >> n >> m;
    int num = 1;
    // 열을 오른쪽에서 왼쪽으로 반복
    for(int j = m - 1; j >= 0; j--){
        // 행을 위에서 아래로 반복
        for(int i = 0; i < n; i++){
            a[i][j] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];
int main(){
    int n;
    cin >> n;

    int cnt = 1;

    for(int col = 0; col < n; col++){
        if(col % 2 == 0){
            for(int row = 0; row < n; row++){
                a[row][col] = cnt++;
            }
        } else {
            for(int row = n - 1; row >= 0; row--){
                a[row][col] = cnt++;
            }
        }
    }

      // 출력
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cout << a[row][col] << ' ';
        }
        cout << '\n';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];
int main(){
    int n;
    cin >> n;
    int cnt = 1;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                a[j][i] = cnt++;
            }
        } else if(i % 2 == 1){
            for(int j = n - 1; j >= 0; j--){
                a[j][i] = cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] <<  " ";
        }
        cout << '\n';
    }


    return 0;
}
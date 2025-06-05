#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];
int main(){
    int n;
    cin >> n;

    //열고정 행이동

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){ // 홀수일 때 처리
            for(int j = n - 1; j >= 0; j--){
                a[j][i] = cnt++;
            }
        } else if(i % 2 == 0){ //짝수일 떄 처리
            for(int j = 0; j < n; j++){
                a[j][i] = cnt++;
            }
        }
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
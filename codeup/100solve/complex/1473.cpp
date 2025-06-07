#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];

int main(){
    int n,m;
    cin >> n >> m;
    int num = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                a[i][j] = num++;
            }
        } else if(i % 2 == 1){
            for(int j = m - 1; j >= 0; j--){
                a[i][j] = num++;
            }
        }
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
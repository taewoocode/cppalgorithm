#include<bits/stdc++.h>
using namespace std;
int a[104][104];
int n,x,y;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int j = x; j < x + 10; j++){
            for(int k = y; k < y + 10; k++){
                a[j][k] = 1;
            }
        }
    }
     
    int boardCount = 0;
    for(int i = 0; i < 104; i++){
        for(int j = 0; j < 104; j++){
            if(a[i][j] == 1){
                boardCount++;
            }
        }
    }
    cout << boardCount << '\n';
    return 0;
}
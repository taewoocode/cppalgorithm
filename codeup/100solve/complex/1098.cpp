#include<bits/stdc++.h>
using namespace std;
int board[104][104];
int main(){
    int h,w,n;
    cin >> h >> w >> n;

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int l,d,x,y;
        cin >> l >> d >> x >> y;

        if(d == 0){
            for(int j = 0; j < l; j++){
                board[x][y + j] = 1;
            }
        } else {
            for(int j = 0; j < l; j++){
                board[x + j][y] = 1;
            }
        }
    }

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
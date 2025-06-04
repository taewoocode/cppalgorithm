#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            cin >> a[i][j];
        }
    }

    int n;
    cin >> n;
    for(int k = 0; k < n; k++){

        int x,y;
        cin >> x >> y;

        for(int j = 1; j <= 19; j++){
            a[x][j] == 1 - a[x][j];
        }

        for(int j = 1; j <= 19; j++){
            a[j][y] = 1 - a[j][y];
        }
    }

    for(int i = 1; i <= 19; i++){
        for(int j = 1; j<= 19; j++){
            cout << a[i][j] << " ";
        }
    }

    return 0;
}
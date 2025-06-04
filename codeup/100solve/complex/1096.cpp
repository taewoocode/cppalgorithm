#include<bits/stdc++.h>
using namespace std;
int a[19][19];
int l,b,c,d,e;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        a[x][y] = 1;
    }

    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

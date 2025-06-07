#include<bits/stdc++.h>
using namespace std;
int r,g,b;
int cnt;
int main(){
    cin >> r >> g >> b;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < g; j++){
            for(int k = 0; k < b; k++){
                cout << i << " " << j << " " << k << '\n';
                cnt++;
            }
        }
    }
    cout << cnt << '\n';


    return 0;
}
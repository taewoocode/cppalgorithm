#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 9; j++){
            cout << i << "*" << j << '\n';
        }
    }



    return 0;
}
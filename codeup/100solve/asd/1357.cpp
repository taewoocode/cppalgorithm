#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << '\n';
    }

    for(int i = n - 1; i >= 1; i--){
        for(int j = 0; j < i; j++) cout << "*";
        cout << '\n';
    }

    return 0;
}
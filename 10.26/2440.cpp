#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = n; i > n; i--){
        for(int j = 0; j < i; j++){
            cout <<  "*";
        }
        cout << '\n';
    }
    return 0;
}
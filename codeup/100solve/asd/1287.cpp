#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 9; i++){
        int stars = i * n;
        for(int j = 0; j <= stars; j++){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
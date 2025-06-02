#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int row = i <= n/2 ? i : n - 1 - i;

        for(int j = 0; j < n / 2 - row; j++){
            cout << " ";
        }

        for(int j = 0; j < 2 * row + 1; j++){
            cout << "*";
        }
        cout << '\n';
    
    }


    return 0;
}
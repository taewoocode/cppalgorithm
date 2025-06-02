#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1){
            for(int j = 0; j < n; j++) cout << "*";
        } else {
            cout << "*";
            for(int j = 0; j < n - 2; j++) cout << " ";
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
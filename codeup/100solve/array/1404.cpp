#include<bits/stdc++.h>
using namespace std;
int a[10004];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int idx = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[(i + j - 2) % n + 1] << " ";
        }
        cout << '\n';
    }




    return 0;
}
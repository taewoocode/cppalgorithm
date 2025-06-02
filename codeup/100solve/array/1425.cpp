#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10004];
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]); // a[i] == 160, a[j] == 165
            else continue;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
        if((i + 1) % m == 0) cout << '\n';
    }

    if(n % m != 0) cout << '\n';

    return 0;
}
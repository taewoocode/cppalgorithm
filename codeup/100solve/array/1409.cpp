#include<bits/stdc++.h>
using namespace std;
int k;
int a[10004];
int main(){
    for(int i = 1; i <= 10; i++){
        cin >> a[i];
    }

    cin >> k;

    cout << a[k];

    return 0;
}
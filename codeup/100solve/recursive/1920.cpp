#include<bits/stdc++.h>
using namespace std;
void go(int n){
    if(n == 0) return;
    go(n / 2);
    cout << n % 2;
}

int main(){
    int n;
    cin >> n;
    if(n == 0) cout << 0;
    else go(n);
    return 0;
}
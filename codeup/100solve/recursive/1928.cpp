#include<bits/stdc++.h>
using namespace std;
void go(int n){
    cout << n << '\n';
    if(n == 1) return;
    if(n % 2 == 0) go(n / 2);
    if(n % 2 == 1) go((3 * n) + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    go(n);
}
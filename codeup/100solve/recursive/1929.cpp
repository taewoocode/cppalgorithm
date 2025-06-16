#include<bits/stdc++.h>
using namespace std;
void go(int n){
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    if(n % 2 == 0) go(n / 2);
    if(n % 2 == 1) go((3 * n) + 1);
    cout << n << '\n';
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    int n;
    cin >> n;
    go(n);
    return 0;
}
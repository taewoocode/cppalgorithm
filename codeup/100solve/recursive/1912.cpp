#include<bits/stdc++.h>
using namespace std;
int go(int n){
    if(n == 0) return 1;
    return n * go(n - 1);
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main(){
    FASTIO();
    int n;
    cin >> n;
    cout << go(n) << '\n';

    return 0;
}
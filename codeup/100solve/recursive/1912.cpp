#include<bits/stdc++.h>
using namespace std;
int go(int n){
    if(n == 0) return 0;
    return n * go(n - 1);
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main(){
    int n;
    cin >> n;
    cout << go(n) << '\n';

    return 0;
}
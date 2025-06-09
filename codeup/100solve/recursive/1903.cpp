#include<bits/stdc++.h>
using namespace std;
void go(int a, int b){
    if(a > b) return;
    if(a % 2 == 1) cout << a << '\n';
    go(a + 1, b);
}

int main(){
    int n,m;
    cin >> n >> m;
    go(n,m);
    return 0;
}
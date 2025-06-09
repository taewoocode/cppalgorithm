#include<bits/stdc++.h>
using namespace std;

void go(int n){
    if(n == 0) return ;
    cout << n << '\n';
    go(n - 1);
}

int main(){
    int n;
    cin >> n;
    go(n);

    return 0;
}
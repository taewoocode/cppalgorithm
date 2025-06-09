#include<bits/stdc++.h>
using namespace std;


void go(int n){
    if(n == 0) return ;
    go(n - 1);
    cout << n << '\n';
}

int main(){
    int n;
    cin >> n;
    go(n);
    return 0;
}


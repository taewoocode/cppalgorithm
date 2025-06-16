#include<bits/stdc++.h>
using namespace std;

int go(int n){
    if(n == 1 || n == 2) return 1;
    return go(n - 1) + go(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << go(n) << '\n';

    return 0;
}